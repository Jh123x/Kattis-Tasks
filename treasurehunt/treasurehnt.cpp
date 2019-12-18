//Treasurehunt
#include<bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declare vars
	int r, c, x = 0, y = 0, steps = 0;
	
	//Take in the number of rows and cols
	cin >> r >> c;
	
	//Creating the AM
	vector<vector<char>> mp(r, vector<char>(c));
	
	//Taking in the grid
	for(int i = 0; i < r; ++i){
		for(int j = 0; j < c; ++j){
			cin >> mp[i][j];
		}
	}
	
	//Print out the grid for verification
//	for(int i = 0; i < r; ++i){
//		for(int j = 0; j < c; ++j){
//			cout << mp[i][j];
//		}
//		cout << "\n";
//	}
	
	//Simulate the movements
	while(x >= 0 && y >= 0 && x < r && y < c){
		
//		cout << "move : " << mp[x][y] << "\n";
		switch(mp[x][y]){
			case 'E':{
				y += 1;
				break;
			}
			case 'W':{
				y -= 1;
				break;
			}
			case 'N':{
				x -= 1;
				break;
			}
			case 'S':{
				x += 1;
				break;
			}
			case 'T':{
				cout << steps;
				return 0;
				break;
			}
		}
		++steps;
		if(steps > r * c){
			cout << "Lost";
			return 0;
		}
	}
	cout << "Out";
	
	
}
