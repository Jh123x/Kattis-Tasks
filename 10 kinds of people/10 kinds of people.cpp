//10 kinds of people
#include <bits/stdc++.h>
using namespace std;

void ff(vector<vector<char>> &map, vector<vector<int>> &visited, int r, int c, char &symbol, int &f_no){
	if(r < 0 || c < 0 || r >= map.size() || c >= map[0].size() || map[r][c] != symbol || visited[r][c] > 0){
		return;
	}else{
		visited[r][c] = f_no;
		ff(map,visited,r+1,c,symbol,f_no);
		ff(map,visited,r-1,c,symbol,f_no);
		ff(map,visited,r,c+1,symbol,f_no);
		ff(map,visited,r,c-1,symbol,f_no);
	}
}

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int rows, cols, queries, i, j, x1, x2, y1 ,y2, counter = 1;
	char pt;
	cin >> rows >> cols;
	
	vector<vector<char>> map(rows,vector<char>(cols));
	vector<vector<int>> visited(rows,vector<int>(cols,0));
	
	for(i = 0; i < rows; ++i){
		for(j = 0; j < cols; ++j){
			cin >> pt;
			map[i][j] = pt;
		}
	}
	
	
	//Starting the flood fill
	for(i = 0; i < rows; ++i){
		for(j = 0; j < cols; ++j){
			if(visited[i][j] > 0){
				continue;
			}else{
				ff(map,visited,i,j,map[i][j], counter);
				++counter;
			}
		}
	}

	//Getting in the number of queries
	cin >> queries;
	
	//Loop through the queries to find
	while(queries--){
		cin >> x1 >> y1 >> x2 >> y2;
		--x1;--x2;--y1;--y2;
		if(visited[x1][y1] == visited[x2][y2]){
			if(map[x1][y1] == '1'){
				cout << "decimal\n";
			}else{
				cout << "binary\n";
			}
		}else{
			cout << "neither\n";
		}
	}
	
	
	
	
}
