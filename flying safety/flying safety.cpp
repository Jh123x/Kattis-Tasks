//flying safety
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	int cases, nodes, commands, n1, n2;
	vector<vector<int>> v;
	
	//Read number of cases to be read from stdin
	cin >> cases;
	for(int i = 0; i < cases; i ++){
		
		//Obtain node 1 and node 2
		cin >> nodes >> commands;
		
		for(int j = 0; j < commands; j++){
			//Receive the vertexes which are connected
			cin >> n1 >> n2;
		}
		cout << nodes-1 << "\n";
	}
}
