//Artic Network
#include<bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Take in the number of cases
	int cases, channel, satellites;
	double dist, weight;
	cin >> cases;
	cout << fixed << setprecision(2);
	
	//Looking for all of the cases
	while(cases--){
		
		//Taking in the number of satellites
		cin >> channel >> satellites;
		
		//The x and y coord of the satellites
		vector<double> x(satellites),y(satellites);
		
		//Getting the coordinates of the x and the y
		for(int i = 0; i < satellites; ++i){
			cin >> x[i] >> y[i];
		}
		
		//Adj list of the satellites
		vector<vector<pair<int,double>>> mp(satellites);
		
		//Calculating the dist between all of the outposts
		for(int i = 0; i < satellites-1; ++i){
			for(int j = i+1; j < satellites; ++j){
				//To add the distance to one another
				dist = hypot(x[i]-x[j], y[i]-y[j]);
				mp[i].emplace_back(pair<int,double>(j,dist));
				mp[j].emplace_back(pair<int,double>(i,dist));
			}
		}
		
		//Create a visited vector for the mst
		vector<bool>visited(satellites);
		
		//Create a pq for the mst
		priority_queue<pair<double,int>,vector<pair<double,int>>,greater<pair<double,int>>> pq;
		
		//Create a pq for the mst weights
		priority_queue<double> wq;
		
		//Add vertex 0 to the pq
		for(auto p:mp[0]){
			pq.push(pair<double,int>(p.second,p.first));
		}
		
		//Mark the first vertex as visited
		visited[0] = true;
		int edges = 1;
		
		while(pq.size() > 0 && edges < satellites){
			
			//Remove the top element from the pq
			auto t = pq.top();
			pq.pop();
			
			//Split up the pq into different elements
			weight = t.first;
			int to = t.second;
			
			//If the vertex is visited continue
			if(visited[to]){
				continue;
			}
			
			//If not process the vertex
			++edges;
			visited[to] = true;
			wq.push(weight);
			
			//Enqueue all the edges connected to it
			for(auto p: mp[to]){
				//If the place is visited, do not add it in
				if(visited[p.first]){
					continue;
				}
				pq.push(pair<double,int>(p.second,p.first));
			}
		}
		
		--channel;
		while(channel--){
			wq.pop();
		}
		
		//Print the result
		cout << wq.top() << "\n";
	}
}
