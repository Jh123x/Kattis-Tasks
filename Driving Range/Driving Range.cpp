//Driving Range
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int cities, roads, i, start, end, weight, max = 0, edges = 0, to;
	pair<int,int> t;
	
	//Taking in the number of cities and the roads
	cin >> cities >> roads;
	
	//Creating the adjacency list to store the cities and roads
	vector<vector<pair<int,int>>> mp(cities);
	vector<bool> visited(cities);
	
	//Taking in all of the roads
	for(i = 0; i < roads; ++i){
		cin >> start >> end >> weight;
		mp[start].emplace_back(pair<int,int>(end,weight));
		mp[end].emplace_back(pair<int,int>(start,weight));
	}
	
	if(roads < cities -1){
		cout << "IMPOSSIBLE\n";
		return 0;
	}
	
	//Creating priority queue for prim's algorithm
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	
	//Inserting the source vertex into the pq;
	for(auto p : mp[0]){
		pq.push(pair<int,int>(p.second,p.first));
	}
	
	//Mark the source vertex as visited;
	visited[0] = true;
	
	//While the pq is 
	while(edges < cities-1 && pq.size() > 0){
		
		//Remove the first element from the pq
		t = pq.top();
		pq.pop();
		
		//If the array is already visited, continue
		if(visited[t.second]){
			continue;
		}
		
		//Mark the current point as visited
		visited[t.second] = true;
		++edges;
		
		//If the weight is higher replace the max weight
		if(max < t.first){
			max = t.first;
		}
		
		//Enqueue the neighbouring vertices;
		for(auto p: mp[t.second]){
			
			//If the edge is already visited do not add it in
			if(visited[p.first]){
				continue;
			}
			
			//Else add the edge into the pq;
			pq.push(pair<int,int>(p.second,p.first));
		}
	}
	if(edges < cities -1){
		cout << "IMPOSSIBLE\n";
		return 0;
	}
	cout << max << "\n";
}
