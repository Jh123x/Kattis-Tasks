//Texassummers
#include<bits/stdc++.h>
using namespace std;

int dist(int &x1, int &y1, int &x2, int &y2){
    return (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2);
}

vector<pair<int,int>> dij(vector<vector<int>> &mp, int space){
    //Modified Dijkstra's algo
    
    //Declaring the vars
    pair<int,int> temp;
    int dist, n, p, td, tn, tp, m, start = space-1;
            
    //Create a visited array
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<pair<int,int>>visited(mp.size(),pair<int,int>(1e9, space));
    
    //Add the start element to the pq
    visited[start]= pair<int,int>(0,-1);
    pq.push(pair<int,int>(visited[start].first, start));
    
    
    //While the priority queue is not empty
    while(pq.size() > 0){
        
        //Remove the top element
        temp = pq.top();
        pq.pop();
        dist = temp.first;
        n = temp.second;
        
        //Check if the current distance is greater than the distance already stored
        if(dist > visited[n].first){
            //Continue the loop
            continue;
        }
        
        //Check all the vertices which are connected;
        for(int i = 0; i < mp.size(); ++i){
            tn = i;
            td = mp[n][i];
            if(visited[n].first + td >= visited[tn].first){
                //If the path is not better or if the path is too int, skip it
                continue;
                
            }else{
                //Otherwise add the pair into the pq and update it;
                visited[tn] = pair<int,int>(visited[n].first + td,n);
                pq.push(pair<int,int>(visited[tn].first, tn));
            }
        }
    }
    //return path
    return visited;
}

int main(){
    //Make the code faster
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    //Declaring the vars
    int spots, x, y, sx, sy, ex, ey;
    bool printed = false;
    cin >> spots;
    
    //Declaring the data strucs
    vector<int> xc(spots+2),yc(spots+2);
    vector<vector<int>> mp(spots+2,vector<int>(spots+2));
    
    for(int i = 0; i < spots+2; ++i){
        cin >> x >> y;
        xc[i] = x;
        yc[i] = y;
    }
    
    //Calculate the distance from everything to everything
    for(int i = 0; i < spots+2; ++ i){
        for(int j = 0; j < spots+2; ++j){
            mp[i][j] = dist(xc[i],yc[i],xc[j],yc[j]);
        }
    }
    
    vector<pair<int,int>> path = dij(mp,spots+2);
    
    //Start counting backwards from end index
    int i = spots;
    
    //Print out path array
//    for(auto j : path){
//    	cout << j.first << " " << j.second << "\n";
//	}
    
    //Tracing the steps
    while (i < spots+2){ 
    	if(i < 0){
    		break;
		}
    	if(i < spots){
    		cout << i << "\n";	
			printed = true;	
		}
		i = path[i].second;
	}
	if(!printed){
		cout << "-\n";
	}
    return 0;
}
