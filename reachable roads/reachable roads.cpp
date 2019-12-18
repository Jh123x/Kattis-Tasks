//Reachable roads
#include<bits/stdc++.h>
using namespace std;

void print_mat(vector<vector<int>> &v){
	//Print out the 2d matrix
	for(int i = 0; i < v.size(); i++){
		for(int j = 0; j < v.size(); j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}

bool if_reachable(vector<vector<bool>> &v, unordered_set<int> &visited, int &start){
	//Check if 1 road is reachable from another
	deque<int> q;
	int curr;
	
	//Insert the first guy into the queue;
	q.push_back(start);
	
	while(q.size() > 0){
		//Remove the first guy from the queue
		curr = q.back();
		q.pop_back();
		
		//Add the current guy to the visited pool
		visited.insert(curr);
		
		//Add the paths connected to current road
		for(int j = 0; j < v[curr].size(); ++j){
			if(v[curr][j] == true && visited.find(j) == visited.end()){
				q.push_back(j);
			}
		}
	}
	return false;
}

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Intialise the variables
	register int cases, paths, commands, n1, n2, i ,j, k, req;
	unordered_set<int> s;
	
	//Taking in the number of test cases
	cin >> cases;
	
	//Taking in the connected roads
	for(i = 0; i < cases; ++i){
		
		//Take in the number of paths as well as the commands
		cin >> paths >> commands;
		
		//Creating the vector that stores the road map
		vector<vector<bool>> roads(paths,vector<bool>(paths,false));
		
		//Reset the variables
		req = 0;
		s.clear();
		
		//Adding the nodes to the vector
		for(j = 0; j < commands; ++j){
			cin >> n1 >> n2;
			roads[n1][n2] = true;
			roads[n2][n1] = true;
		}
		
		//Checking all the paths have been checked
		for(j = 0; j < paths; ++j){

			//If the path have not been checked, check the path for conneceted components
			if(s.find(j) == s.end()){
				if_reachable(roads,s,j);
				++req;
			}
				
		}
		
		//Output the number of connected components -1
		cout << req-1 << "\n";
		
	}
}
