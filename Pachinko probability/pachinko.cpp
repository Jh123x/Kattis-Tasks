//Pachinko probability
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int nodes, win = 0, all = 0, edges, gates, gate, from, to;
	cin >> nodes >> edges;	
	
	vector<vector<int>> mp(nodes);
	vector<bool> g(nodes,false);
	vector<int> d(nodes,0);
	
	//Create the adjacency matrix to store graph
	for(int i = 0; i < edges; ++i){
		cin >> from >> to;
		mp[from].emplace_back(to);
		d[to] += 1;
	}
	
	//Take in the number of gates
	cin >> gates;
	
	//Take in the gates one step at a time
	for(int i= 0; i < gates; ++i){
		cin >> gate;
		g[gate] = true;
	}
	
	//Create the queue for the BFS
	deque<int> q;
	
	//Enqueue the starting nodes
	for(int i = 0; i < nodes; ++i){
		//If the in degress of the node is 0
		if(!d[i]){
			q.push_back(i);
		}
	}
	
	//Conduct the BFS
	while(q.size() > 0){
		//Remove the first element from the front
		to = q.front();
		q.pop_front();
		
		//Check if it is a dead end
		if(!mp[to].size()){
			++all;
			
			//If it is a gate add it to the winning path
			if(g[to]){
				++win;
			}
		}
		
		else{
			//If not enqueue the rest of the adjacent nodes
			for(auto j: mp[to]){
				q.push_back(j);
			}
		}
	}
	
	//Print out the output
	cout << "winning paths " << win << "\ntotal paths " << all;
	
}
