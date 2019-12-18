//Block crusher
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	unsigned short int w, h;
	char x;
	
	//Get the width and height of the block
	while(cin >> h >> w){
		
//		cout << "height, width = " << h << ", " << w << "\n";
		//Check if it is the end condition
		if(w+h == 0){
			break;
		}
		
		//Create the vector to store the arr
		vector<vector<char>> mp(h,vector<char>(w));
		
		//Get the map for the matrix
		for(int i = 0; i < h; ++i){
			for(int j = 0; j < w; ++j){
				cin >> x;
				mp[i][j] = x;
			}
		}
		
		//Loop through all the items in the first row and run all of them using dij to get the shortest distance
		
		
		//Set the spots which make up the path as ' '
		
		
		
		cout << "\n";
		
		//Print the matrix out
		for(int i = 0; i < h; ++i){
			for(int j = 0; j < w; ++j){
				cout << mp[i][j];
			}
			cout << "\n";
		}
	
	}
	
}
