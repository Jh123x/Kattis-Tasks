//Abinito
#include <bits/stdc++.h>
using namespace std;

int main(){
    //Make the code faster
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    //The first line of the input
    unsigned long int hash, exp, mod = 1e9+7;
	int edges;
	unsigned short int command, vertices, total, x, y, i, j, start, end, queries;
    bool temp, xpose = false, com = false;
    
    //Take in the number of vertices, edges as well as queries
    cin >> vertices >> edges >> queries;
    
    //Adjacency matrix
    vector<vector<bool>> mp(vertices,vector<bool>(vertices));
    
    //Adding the edges
    while(edges--){
        cin >> start >> end;
        mp[start][end] = true;
    }
    
    //The queries
    while(queries--){
        cin >> command;
        switch(command){
            case 1:{
                //If the command is 1 a new vertex is added that is not attached to anything
                for(auto &i : mp){
                    i.emplace_back(com);
                }
                mp.emplace_back(vector<bool>(++vertices,com));
                break;
            }
            case 2:{
                //If the command is 2, connect x to y
                cin >> x >> y;
                if(xpose){
                    mp[y][x] = !com;
                }else{
                    mp[x][y] = !com;
                }
                break;
            }
            case 3:{
                //Remove all of the edges from and to x
                cin >> x;
                for(i = 0; i < vertices; ++i){
                    mp[x][i] = com;
                    mp[i][x] = com;
                }
                break;
            }
            case 4:{
                //Remove the x -> y edge
                cin >> x >> y;
                if(xpose){
                    mp[y][x] = com;
                }else{
                    mp[x][y] = com;
                }
                break;
            }
            case 5:{
                //Transpose the graph
                xpose = !xpose;
                break;
            }
            case 6:{
                //Get complement of the graph
                com = !com;
                break;
            }
        }
    }
    
    //Compute the hashes
    cout << vertices << "\n";
    if(xpose){
        for(i = 0; i < vertices; ++i){
            total = 0;
            hash = 0;
            exp = 1;
            for(j = 0; j < vertices; ++j){
                if(mp[j][i] == com || i == j){
                    continue;
                }else{
                    ++total;
                    hash = (hash + exp * j) % mod;
                    exp = (exp * 7) % mod;
                }
            }
            cout << total << " " << hash << "\n";
        }   
    }else{
        for(i = 0; i < vertices; ++i){
            total = 0;
            hash = 0;
            exp = 1;
            for(j = 0; j < vertices; ++j){
                if(mp[i][j] == com || i == j){
                    continue;
                }else{
                    ++total;
                    hash = (hash + exp * j) % mod;
                    exp = (exp * 7) % mod;
                }
            }
            cout << total << " " << hash << "\n";
        }   
    }
}
