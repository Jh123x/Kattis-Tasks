//Feast for cats
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int cases, milk, cats, start, end, dist, result, edges, vertices;
	pair<int,int> t;
	
	//Take in the number of testcases
	cin >> cases;
	
	//Loop through all of the test cases
	while(cases--){
		
		//Take in the number of milk and cats
		cin >> milk >> cats;
		
		//Initialise the adjacency list for the graph
		vector<vector<pair<int,int>>>mp(cats);
		
		vertices = (cats*(cats-1))/2;
		
		//Take in the distance between the cats
		for(int i = 0; i < vertices; ++i){
			cin >> start >> end >> dist;
			mp[start].emplace_back(pair<int,int>(end,dist));
			mp[end].emplace_back(pair<int,int>(start,dist));
		}
		
		//Create data struc for prims
		vector<bool>visited(cats);
		
		//Create the priority queue for the edges to be added
		priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
		
		//Start at vertex 0
		visited[0] = true;
		result = 0, edges = 0;
		
		//Append all the nodes connected to 0 to the pq
		for(auto p : mp[0]){
			pq.push(pair<int,int>(p.second,p.first));
		}
		
		//Start prims algorithm
		while(pq.size() > 0 && edges < cats){
			
			//Take the top element from the priority queue
			t = pq.top();
			pq.pop();
			
			//Check if the cat is visited;
			if(visited[t.second]){
				continue;
			}
			
			//If not visited a new edge of the graph is found
			visited[t.second] = true;
			++edges;
			result += t.first;
			
			//If the milk is already not enough break
			if(result + cats > milk){
				break;
			}
			
			//Append all the surrounding edges into the pq
			for(auto p: mp[t.second]){
				
				//Do not add nodes which are already connected
				if(visited[p.first]){
					continue;
				}
				
				//Add the node into the priority queue
				pq.push(pair<int,int>(p.second,p.first));
			}
			
		}
		
		//If the amount of milk is enough for the spilling and the number of cats
		if(milk >= cats+result){
			cout << "yes\n";
		}else{
			cout << "no\n";
		}
		
	}
}
