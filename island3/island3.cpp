//Islands
#include <bits/stdc++.h>
using namespace std;

int rows, cols;

bool convert_cloud(vector<vector<char>> &map, int row, int col){
	//Flood fill teh clouds and check the surroundings to see if there are any land
	if(row < 0 || col < 0 || row >= row || col >= cols || map[row][col] == 'W'){
		//If the edge is reached, return false
		return false;
	}else if(map[row][col] == 'L'){
		//If the current cell is a land cell, return true
		return true;
	}else{
		if(convert_cloud(map,row+1,col) || convert_cloud(map,row-1,col) || convert_cloud(map,row,col+1) || convert_cloud(map,row,col-1)){
			//If the cloud is connected to any of the land pieces, make it into a land
			map[row][col] = 'L';
			return true;
		}else{
			//If not turn it into water pieces
			map[row][col] = 'W';
			return false;
		}
	}
}

void dfs(vector<vector<char>> &map, int row, int col){
	//Flood fill normally
	if(row < 0 || col < 0 || row >= rows || col >= cols || map[row][col] == 'W'){
		return;
	}else{
		map[row][col] = 'W';
		dfs(map,row+1,col);
		dfs(map,row-1,col);
		dfs(map,row,col+1);
		dfs(map,row,col-1);
	}
}

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	char piece;
	bool all_c = true;
	int islands = 0;
	
	cin >> rows >> cols;
	
	//Initialising the map
	vector<vector<char>> map(rows,vector<char>(cols));
	
	
	//Fill up the map
	for(int i = 0; i < rows; ++i){
		for(int j = 0; j < cols; ++j){
			cin >> piece;
			map[i][j] = piece;
		}
	}
	
	
	//Convert all the clouds into land/water
	for(int i = 0; i < rows; ++i){
		for(int j = 0; j < cols; ++j){
			if(map[i][j] == 'C'){
				convert_cloud(map,i,j);
			}
		}
	}
	
	//Conduct the floodfill
	for(int i = 0; i < rows; ++i){
		for(int j = 0; j < cols; ++j){
			if(map[i][j] == 'L'){
				++islands;
				dfs(map,i,j);
			}
		}
	}
	
	cout << islands << "\n";
}
