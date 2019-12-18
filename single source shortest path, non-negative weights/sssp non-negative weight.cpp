//Single source shortest path, non-negative weights
#include <bits/stdc++.h>
using namespace std;

//Define the map;
vector<vector<pair<long,long>>> mp;
vector<long> visited;

//declaring the variables
int nodes, edges, queries, s, node;

void dij(long start){
    //Modified Dijkstra's algo
    
    //Declaring the vars
    pair<long,long> temp;
    long dist, n, p, td, tn, tp;
            
    //Create a visited array
    priority_queue<pair<long,long>,vector<pair<long,long>>, greater<pair<long,long>>> pq;
    
    //Add the start element to the pq
    visited[start]= 0;
    pq.push(pair<long,long>(visited[start], start));
    
    //While the priority queue is not empty
    while(pq.size() > 0){
        
        //Remove the top element
        temp = pq.top();
        pq.pop();
        dist = temp.first;
        n = temp.second;
        
        //Check if the current distance is greater than the distance already stored or if path is too much
        if(dist > visited[n]){
            //Continue the loop
            continue;
        }
        
        //Check all the vertices which are connected;
        for(auto i : mp[n]){
            tn = i.first;
            td = i.second;
            
            if(visited[n] + td >= visited[tn]){
                //If the path is not better or if the path is too long, skip it
                continue;
                
            }else{
                //Otherwise add the pair into the pq and update it;
                visited[tn] = visited[n] + td;
                pq.push(pair<long,long>(visited[tn], tn));
                
            }
        }
    }
}
int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Taking in all of the inputs
	while(cin >> nodes >> edges >> queries >> s){
		if(nodes+edges+queries+s == 0){
			return 0;
		}
		
		//Assigning the map
		int from, to, weight;
		mp = vector<vector<pair<long,long>>>(nodes);
		visited = vector<long>(nodes,1e9);
		
		//Taking in all the edges
		while(edges--){
			cin >> from >> to >> weight;
			mp[from].push_back(pair<long,long>(to,weight));
		}
		
		//Perform dikjstra's algo
		dij(s);
		
		//Take care of the queries
		while(queries--){
			cin >> node;
			if(visited[node] == 1e9){
				cout << "impossible";
			}else{
				cout << visited[node];
			}
			cout << "\n";
		}
		cout << "\n";
	}
	
}
