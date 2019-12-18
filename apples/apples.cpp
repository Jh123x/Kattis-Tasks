		//apples
		#include <bits/stdc++.h>
		using namespace std;
		
		void process_row(vector<vector<char>> &v, int &breath){
			//Setting the lowest point to add the apples too
			register int counter = v.size() - 1;
			
			//Going up the cols and shifting the apples down to the correct position
			for(int i = v.size()-1; i >= 0; --i){
				if(v[i][breath] == '#'){
					//If it is an obstacle, set the point above the obstacle to a new 
					counter = i-1;
					
				}else if(v[i][breath] == 'a'){
					//If it is an 'a' set it to the lowest available position for the apple to drop to
					
					v[i][breath] = '.';
					v[counter--][breath] = 'a';
					
				}
			}
			return;
		}
		
		int main(){
			//Make the code faster
			cin.tie(0);
			cout.tie(0);
			ios::sync_with_stdio(false);
			
			//Define the variable
			register int length, breath;
			
			//Take in the input for length and breadth
			cin >> length >> breath;
			
			//Create a vector to store the grid
			vector<vector<char>> grid(length,vector<char>(breath));
			for(auto &k : grid){	
				for(auto &l : k){
					cin >> l;
				}
			}
			
			//Check each of the columns individually
			for(int i = 0; i < breath; ++i){
				process_row(grid, i);
			}
		
			//Print out the final output
			for(auto k : grid){
				for(auto l: k){
					cout << l;
				}
				cout << "\n";
			}
		}
