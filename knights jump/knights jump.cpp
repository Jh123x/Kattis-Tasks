//Knight jump
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Making the steps for the horse
	vector<int> steps_x = {2,2,-2,-2,1,1,-1,-1};
	vector<int> steps_y = {1,-1,1,-1,2,-2,2,-2};
	
	//Declaring the variables
	int sr, sc, g;
	char p;
	cin >> g;
	
	//Making the vector
	vector<vector<char>> v(g,vector<char>(g));
	vector<vector<int>> visited(g,vector<int>(g,-1));
	
	
	//Take in the vector
	for(int i = 0; i <g ;++i){
		for(int j = 0; j < g; ++j){
			cin >> p;
			v[i][j] = p;
			if(p == 'K'){
				sr = i;
				sc = j;
			}
		}
	} 
	
	
	//Conducting the BFS for the horse
	deque<pair<int,int>> q;
	
	//Pushing the starting node into the queue
	q.push_back({sr,sc});
	visited[sr][sc] = 0;
	
	//Continue the BFS as long as the queue is nt empty
	while(q.size() > 0){
		
		//Remove the first item from the queue
		auto temp = q.front();
		int r = temp.first;
		int c = temp.second;
		q.pop_front();
		
		//Loop through the rest of the items in the queue
		for(int i = 0; i < 8; ++i){
			int rn = r + steps_x[i];
			int cn = c + steps_y[i];
			
			//For each item that was counted check if it is value
			if(rn < 0 || cn < 0 || rn >=g || cn >= g ){
				continue;
			}
			
			//If the node is already visited do not process it again
			if(visited[rn][cn] >= 0){
				continue;
			}
			
			//If the road is blocked, continue
			if(v[rn][cn] == '#'){
				continue;
			}
			
			//If not process the node
			
			//Assign the current node as being 1 more than the distance of the previous node detected
			visited[rn][cn] = visited[r][c] + 1;
			
			//Add the item to the back of the queue
			q.push_back({rn,cn});
			
		}
	}
	
	cout << visited[0][0] << "\n";
}
















