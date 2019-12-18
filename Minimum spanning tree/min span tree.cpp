//Minimum spanning tree
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	
	//Declaring the variables
	int nodes, edges, start, end, weight, from, to, cost, i;
	tuple<int,int,int> t;
	
	
	//Loop as long as there is an input for the nodes and the edges
	while(cin >> nodes >> edges){
		
		//Check if the nodes and the edges are 0
		if(nodes == 0){
			
			//If there are no nodes end the process
			return 0;
			
		}
		
		
		//Create the adjacency list for the graph as well as empty adj list for the mst
		vector<vector<pair<int,int>>>mp(nodes);
		set<pair<int,int>> mst;
		
		
		//Take in all of the edges with their weights and add them to the adjacency list
		for(i = 0; i < edges; ++i){
			
			cin >> start >> end >> weight;
			
			mp[start].emplace_back(pair<int,int>(end,weight));
			mp[end].emplace_back(pair<int,int>(start,weight));
			
		}
		
		//Prim's algorithm for minimum spanning tree
		
		//Create the pq for Prim's
		priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>>pq;
		
		
		//Create a visited array keep track and see if the vertex is visited
		vector<int> visited(nodes);
		
		
		//Add all the edges connecting the source
		for(auto p : mp[0]){
			pq.push(tuple<int,int,int>(p.second,p.first,0));
		}
		
		
		//Set the number of edges visited to 1 and mark initial node as visited
		visited[0] = 1;
		cost = 0;
		
		//Keep looping until pq is empty
		while(!pq.empty()){
			
			//Obtain the top element from the priority queue
			t = pq.top();
			pq.pop();
			
			//Obtain the 3 different values from the tuple
			weight = get<0>(t);
			to = get<1>(t);
			from = get<2>(t);
			
			
			//If the to node is already visited, discard it
			if(visited[to]){
				continue;
			}
			
			
			//If the node is not already visited, means a new edge is found
			if(from < to){
				
				//Add from to pair into mst if from < to
				mst.insert(pair<int,int>(from,to));	
				
			}else{
				
				//Else add to from pair into mst
				mst.insert(pair<int,int>(to,from));
				
			}
			
			cost += weight;
			visited[to] = 1;
			
			//Add the remaining nodes adjacent to it into the pq
			for(auto p : mp[to]){
				
				//If the node is already visited do not visit it again
				if(visited[p.first]){
					continue;
				}
				
				//If not add it into the priority queue
				pq.push(tuple<int,int,int>(p.second,p.first,to));
			}
		}
		
		//If the number of nodes within the MST is smaller than the amt needed to form a tree then it is impossible
		if(mst.size() < nodes-1){
			cout << "Impossible\n";
			continue;
		}
		
		//If there is a minimum spanning tree
		
		//Output the weight
		cout << cost << "\n";
		
		//Output the edges of the mst in lexographical order
		for(auto p : mst){
			cout << p.first << " " << p.second << "\n";	
		}
	}
}
