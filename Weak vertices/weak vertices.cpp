//Weak vertices
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int n;
	bool tri;
	
	//Take in the value of n
	while(cin >> n){
		
		//If n == -1 break
		if(n == -1){
			return 0;
		}
		
		//Create the AM to store nxn matrix;
		vector<vector<int>> mp(n,vector<int>(n));
		vector<int> v(n);
		
		//Take in the AM
		for(int i = 0; i < n ;++i){
			for(int j = 0; j < n; ++j){
				cin >> mp[i][j];
			}
		}
		
		//Sweep through the AM to see if it is strong
		for(int i = 0; i < n; ++i){
			tri = false;
			for(int j = 0; j < n; ++j){
				//If an edge exist from i to j and i to k, check if the edge from j to k exist
				if(mp[i][j] == 1){
					for(int k = j+1; k < n; ++k){
						if(mp[i][k] == 1){
							if(mp[k][j] == 1){
								tri = true;
								break;
							}
						}
					}
				}
				if(tri){
					break;
				}
			}
			if(!tri){
				v[i] = 1;
			}
		}
		for(int i = 0; i < n; ++i){
			if(v[i] == 1){
				cout << i << " ";
			}
		}
		cout << "\n";
	}
	
	
}
