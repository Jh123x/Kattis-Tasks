//Terraces
#include <bits/stdc++.h>
using namespace std;

//Creating the AM to store the cells
vector<vector<int>> mp, v, visited;

int ff(int r, int c, int &h){
	if(r < 0 || c < 0 || r >= mp.size() || c >= mp[0].size() || v[r][c] || mp[r][c] != h){
		return 0;
	}else{
		v[r][c] = 1;
		visited[r][c] = 1;
		return 1 + ff(r+1,c,h) + ff(r-1,c,h) + ff(r,c+1,h) + ff(r,c-1,h);
	}
}

bool check(int r, int c){
	
	//Create a queue to check for the lowest 
	bool lowest = true;
	queue<int> row, col;
	row.push(r);
	col.push(c);
	
	while(row.size()){
		//Get the front element of the queue
		r = row.front();
		c = col.front();
		
		//Remove the front element
		row.pop();
		col.pop();
		
		//Check if the coord is valid or visited continue
		if(r < 0 || c < 0 || r >= mp.size() || c >= mp[0].size() || visited[r][c]){
			continue;
		}
		
		//Mark the node as visited
		visited[r][c] = 1;
		
		//Add the coords near it if they are of the same height
		if(c < mp[1].size()-1){
			if(mp[r][c] == mp[r][c+1]){
				row.push(r);
				col.push(c+1);
			}else if(mp[r][c] > mp[r][c+1]){
				lowest = false;
				break;
			}		
		}
		
		if(r < mp.size()-1){
			if(mp[r][c] == mp[r+1][c]){
				row.push(r+1);
				col.push(c);	
			}else if(mp[r][c] > mp[r+1][c]){
				lowest = false;
				break;
			}
			
		}
		
		if(r > 0){
			if(mp[r][c] == mp[r-1][c]){
				row.push(r-1);
				col.push(c);
			}else if(mp[r][c] > mp[r-1][c]){
				lowest = false;
				break;
			}
				
		}
		
		if(c > 0){
			if(mp[r][c] == mp[r][c-1]){
				row.push(r);
				col.push(c-1);
			}else if(mp[r][c] > mp[r][c-1]){
				lowest = false;
				break;
			}		
		}
	}
	return lowest;
}

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	int cols, rows, height, count = 0;
	
	//Take in the number of rows and columns
	cin >> cols >> rows;
	
	//Creating the am to store the heights
	mp = vector<vector<int>>(rows,vector<int>(cols));
	v = vector<vector<int>>(rows, vector<int>(cols));
	visited = vector<vector<int>>(rows, vector<int>(cols));
	
	//Filling up the AM
	for(int i = 0; i < rows; ++i){
		for(int j = 0; j < cols; ++j){
			cin >> height;
			mp[i][j] = height;
		}
	}
	
	//Go through all of the elements in the AM
	for(int i = 0; i < rows; ++i){
		for(int j = 0; j < cols; ++j){
			
			//If the node is not already visited
			if(!visited[i][j]){
				
				//If the current coord is the lowest, conduct a ff
				if(check(i,j)){
					
					//Conduct a ff
					count += ff(i,j,mp[i][j]);
					
				}else{
					
					//Conduct a ff
					ff(i,j,mp[i][j]);
				}
				
			}
		}
	}
	
	cout << count;
	
}
