//Get shorty
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code run faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int vertices, edges, start, end;
	double weight;
	pair<int,double> t;
	pair<double,int> temp;
	
	//Set the precision of cout
	cout << fixed << setprecision(4);
	
	//While there is input on the rows and the cols
	while(cin >> vertices >> edges){
		
		//Check if the rows and cols are 0
		if(vertices + edges == 0){
			break;
		}
		
		//Create a vector to make an am
		vector<vector<pair<int,double>>> mp(vertices);
		
		//Take in the items in the al
		for(int i = 0; i < edges; ++i){
			cin >> start >> end >> weight;
			mp[start].emplace_back(pair<int,double>(end, weight));
			mp[end].emplace_back(pair<int,double>(start, weight));
		}
		
		//Create the vars for dij
		priority_queue<pair<double,int>, vector<pair<double,int>>, less<pair<double,int>>> pq;
		vector<double> visited(vertices);
		
		//Add in the source
		visited[0] = 1;
		for(int i = 0; i < mp[0].size(); ++i){
			pq.push(pair<double,int>(mp[0][i].second,mp[0][i].first));
		}
		
		
		//Run dij
		while(pq.size()){
			
			//Get the top element of the priority queue
			temp = pq.top();
			pq.pop();
		
			//If the value is not better discard it
			if(visited[temp.second] >= temp.first){
				continue;
			}
			
			//Proceses the value and propagate it
			visited[temp.second] = temp.first;
			
			//Propagate the value that it is connected to
			for(int i = 0; i < mp[temp.second].size(); ++i){
				t = mp[temp.second][i];
				
				//If the weight to be inserted is not better, do not add it
				if(visited[t.first] > t.second * temp.first || t.first == temp.second){
					continue;
				}else{
					//Add it into the pq
					pq.push(pair<double,int>(temp.first * t.second,t.first));
				}
			}
			
		}
		
		cout << visited[vertices-1] << "\n";
		
	}
}
