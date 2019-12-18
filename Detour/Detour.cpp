//Detour
#include <bits/stdc++.h>
using namespace std;

string itos(int i){
	
	//If i is 0 return 0
	if(i == 0){
		return "0";
	}
	
	string r = "";
	
	//If i is smaller than 0
	if(i < 0){
		r += "-";
		i = -i;
	}
	
	//Loop while changing it into char
	while(i > 0){
		r += i % 10 + '0';
		i/=10;
	}
	return r;
}

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the number of variables
	int intersections, roads, start, end, weight;
	cin >> intersections >> roads;
	
	//Making the adjacency matrix
	vector<vector<pair<int,int>>> mp(intersections);
	
	//Taking in the number of edges
	for(int i = 0; i < roads; ++i){
		cin >> start >> end >> weight;
		
		//Adding the edges into the adjacency matrix
		mp[start].emplace_back(pair<int,int>(end,weight));
		mp[end].emplace_back(pair<int,int>(start,weight));
	}
	
	//Getting the shortest path from Amsterdam (1) to all the nodes using dij
	priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;
	vector<int> dist(intersections), from(intersections);
	
	//Initialise the starting weights and from;
	for(int i = 0; i < intersections; ++i){
		dist[i] = 1e9;
		from[i] = i;
	}
	
	//Enqueue the source (1) into the priority queue 
	for(int i = 0; i < mp[1].size(); ++i){
		pq.push(tuple<int,int,int>(mp[1][i].second, mp[1][i].first, 1));
	}
	
	//Set the source as 0
	dist[1] = 0; 
	
	//Start Dij to get Dij spanning tree
	while(pq.size()){
		
		//Get the top element from the pq
		auto temp = pq.top();
		pq.pop();
		
		//Decompose the elements
		weight = get<0>(temp);
		start = get<2>(temp);
		end = get<1>(temp);
		
		//Check if the edge can be relaxed
		if(dist[end] < dist[start] + weight){
			continue;
		}
		
		//Relax the edge
		dist[end] = dist[start] + weight; 
		from[end] = start;
		
		//Enqueue all the edges from it into the pq
		for(auto i : mp[end]){
			
			//Enqueue it only if the distance is smaller
			if(i.second + dist[end] < dist[i.first]){
				pq.push(tuple<int,int,int>(i.second,i.first,end));
			}
		}
	}
	
	//Quick check to see if (1) is reachable from 0
	if(dist[0] == 1e9){
		cout << "impossible";
		return 0;
	}
	
	//Do bfs to see if it is reachable
	vector<bool> visited(intersections,false);
	stack<int> q, fr;
	vector<int> ff(intersections);
	
	//Initialise the from vector
	for(int i = 0; i < intersections; ++i){
		ff[i] = i;
	}
	
	//Add the source node into the queue and mark it as visited
	q.push(0);
	fr.push(0);
	
	//Start the bfs to see if the node is reachable
	while(q.size() > 0){
		
		//Remove the first elements
		int t = q.top();
		int f = fr.top();
		q.pop();fr.pop();
		
		//If the route is used by dij or already visited ignore it
		if(visited[t] || from[f] == t){
			continue;
		}
		
		//Mark the path as visited
		visited[t] = true;
		
		//Update where the route is from
		ff[t] = f;
		
		//If (1) is found break out as we have the route
		if(t == 1){
			ff[1] = f;
			break; 
		}
		
		//Enqueue its neighboours
		for(auto temp : mp[t]){
		
			q.push(temp.first);
			fr.push(t);
		}
	}

	int count = 0, parent, curr = 1;
	string path = "";
    bool flag = false;
	
	
	//Mapping out the path
	while(true){
		if(curr == parent){
			break;
		}
		
		parent = curr;
		path = itos(curr) + " " + path;
		++count;
		
		curr = ff[curr];
		
	}
	
	//Print out the appropriate output
	if(count > 1){
		cout << count << " " << path;	
	}else{
		cout << "impossible";
	}
	
}
