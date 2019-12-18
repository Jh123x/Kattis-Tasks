//Flowery trails
#include<bits/stdc++.h>
using namespace std;


int dij(vector<vector<pair<int,int>>> &mp, int source, int r, int &pts){
	//Dij algorithm
	
	//Create the visited array and pq
	vector<pair<int,vector<int>>> visited(pts,pair<int,vector<int>>(1e9,vector<int>()));
	priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> pq;
	int cw, cv, result = 0, vertex, weight, from;
	
	//Set the source as 0 and insert into pq
	visited[source] = {0,vector<int>()};
	pq.push(make_tuple(visited[source].first,source,-1));
	
	//Start the dij algo
	while(pq.size() > 0){
		
		//Remove the first item from the queue
		auto l = pq.top();
		vertex = get<0>(l);
		weight = get<1>(l);
		from = get<2>(l);
		pq.pop()
		
		//Check all of the edges it is connected to
		for(auto &i : mp[vertex]){
			cv = i.first;
			cw = i.second;
			
			//If there is a relaxation, push it to the back of the pq
			if(cw + weight < visited[cv]){
				visited[cv] = pair<int,vector<int>>(cw+weight, {vertex});
				pq.push({visited[cv],cv,vertex});
			}else if(cw + weight == visited[cv]){
				visited[cv].second.push_back(vertex);
			}
		}
	}
	
	//Add up the distance from the node to the end
	
	//Create a queue to process the node
	deque<pair<int,vector<int>>> q;
	
	//Add the target node into the queue
	q.push_back(visited[r])
	
	//Process all the nodes as long as the queue is not empty
	while(q.size() > 0){
		//Get the front element
		auto [j,k] = q.front();
		q.pop_front();
		
		for(auto i: k){
			//Add the other sources into the queue
			if(i == -1){
				break;
			}
			q.push_back(visited[i]);
			
			//Add their distances into the total result
			result += j - visited[i].first;
		}
	}
	
	
	return result;
	
	
	
}

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	int pts, trails, start, end, weight;
	
	//Taking in the input
	cin >> pts >> trails;
	
	//Creating an adjacency matrix
	vector<vector<pair<int,int>>> mp(pts,vector<pair<int,int>>());
	
	//Taking in all of the edges
	while(trails--){
		//Processing each of the edges and add them to the adjacency matrix
		cin >> start >> end >> weight;
		mp[start].emplace_back(end,weight);
		mp[end].emplace_back(start,weight);
	}
	
	//Run the Dij algorithm
	cout << dij(mp,0,pts-1,pts) << "\n";
	
	
}
