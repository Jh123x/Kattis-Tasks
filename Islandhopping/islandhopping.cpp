//Island hopping
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Initialise the variables
	int islands, edges, vertex, from, v, i, j,cases;
	double result, dist, xc, yc, weight, w;
	tuple<double,int,int> t;
	
	//Set the precision of cout
	cout << fixed << setprecision(13);
	
	//Taking in thenumber of cases
	cin >> cases;
	
	while(cases--){
		//Take in the number of islands
		cin >> islands;
		
		//Resetting the number of variables
		vector<double> x(islands), y(islands);
		vector<int> visited(islands, 0);
		vector<vector<pair<double,int>>> mp(islands);
		priority_queue<tuple<double,int,int>, vector<tuple<double, int, int>>, greater<tuple<double,int,int>>> pq;
		
		
		//Taking in the coords for the islands
		for(i = 0; i < islands; ++i){
			cin >> x[i] >> y[i];
		}
		
		//Filling up the distance between 2 islands
		for(i = 0; i < islands-1; ++i){
			for(j = i+1; j < islands; ++j){				
				//Calculate the distance between the islands
				dist = hypot((x[j]-x[i]),(y[j]-y[i]));
				
				//Adding the islands to each other's adjacency list
				mp[i].emplace_back(pair<double,int>(dist,j));
				mp[j].emplace_back(pair<double,int>(dist,i));
			}
		}
		
		//Initialising the result and the priority queue to hold the MST
		result = 0.0;
		edges = 1; //Include the first edge which is added before the while loop
		
		//Putting the vertices connected into 0 int priority queue
		for(auto k : mp[0]){
			//Get the weight and the vertex from the pair
			weight = k.first;
			vertex = k.second;
			
			//Push them into the priority queue
			pq.push(tuple<double,int,int>(weight,vertex,0));
		}
		
		//Marking the source node as visited
		visited[0] = true;
		
		//Keep processing until the the number of edges is equal to number if islands - 1
		while(edges < islands){
			
			//Remove the top item from the priority queue
			t = pq.top();
			pq.pop();
			
			//Decompose the item into weight to vertex and from vertex
			weight = get<0>(t);
			vertex = get<1>(t);
			from = get<2>(t);
			
			//Check if the to vertex is already processed
			if(visited[vertex]){
				//If the vertex is processed, skip it
				continue;
			}
			
			//If it is not already processed, add it to the MST
			visited[vertex] = 1;
			++edges;
			result += weight;
			
			//Enqueue all of the edges that is attached to the source into the mst
			for(auto k : mp[vertex]){
				
				//Decompose the weight and the vertex
				w = k.first;
				v = k.second;
				
				//If the node is already visited, do not visit it again
				if(visited[v]){
					continue;
				}
				
				//If not add the tuple into the pq
				pq.push(tuple<double,int,int>(w,v,vertex));
			}
		}
		
		//Print out the result
		cout << result << "\n";
	}
}
