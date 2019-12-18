//Abinito
#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<bool>> &v){
    cout << "-------------------\n";
    for(auto i: v){
        for(auto j:i){
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "-------------------\n";
}

int main(){
    //Make the code faster
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    //The first line of the input
    long long vertices, edges, queries, start, end, command, x, y, total, hash, counter, i, j, exp, mod = 1e9+7;
    bool temp;
    
    //Take in the number of vertices, edges as well as queries
    cin >> vertices >> edges >> queries;
    
    //Adjacency matrix
    vector<vector<bool>> mp(vertices,vector<bool>(vertices,0));
    
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
                ++vertices;
                for(auto &i : mp){
                    i.emplace_back(false);
                }
                mp.emplace_back(vector<bool>(vertices,false));
                break;
            }
            case 2:{
                //If the command is 2, connect x to y
                cin >> x >> y;
                mp[x][y] = true;
                break;
            }
            case 3:{
                //Remove all of the edges from x
                cin >> x;
                for(i = 0; i < vertices; ++i){
                    mp[x][i] = false;
                    mp[i][x] = false;
                }
                break;
            }
            case 4:{
                //Remove the x -> y edge
                cin >> x >> y;
                mp[x][y] = false;
                break;
            }
            case 5:{
                //Transpose the graph
                for(i = 0; i < vertices; ++i){
                    for(j = 0; j < i; ++j){
                        temp = mp[i][j];
                        mp[i][j] = mp[j][i];
                        mp[j][i] = temp;
                    }
                }
                break;
            }
            case 6:{
                //Get complement of the graph
                for(i = 0; i < vertices; ++i){
                    for(j = 0; j < vertices; ++j){
                        mp[i][j] = !mp[i][j];
                    }
                }
                break;
            }
        }
    }
    
//    print(mp);
    
    //Compute the hashes
    cout << vertices << "\n";
    for(i = 0; i < vertices; ++i){
        total = 0;
        hash = 0;
        exp = 1;
        for(j = 0; j < vertices; ++j){
            if(i == j || !mp[i][j]){
                continue;
            }else{
                ++total;
                hash = (hash + exp * j);
                exp = (exp * 7);
                if(hash > mod){
                	hash %= mod;
				}
                if(exp > mod){
                	exp %= mod;
				}
            }
        }
        cout << total << " " << hash << "\n";
    }   
}
