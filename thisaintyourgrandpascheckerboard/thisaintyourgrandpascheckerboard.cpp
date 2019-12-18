//thisaintyourgrandpascheckerboard
#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<char>> &mp){
	cout << "\n";
	for(int i =0; i < mp.size(); ++i){
		for(int j = 0; j < mp.size(); ++j){
			cout << mp[i][j];
		}
		cout << "\n";
	}
	cout << "\n";
}

bool check_row(vector<char> &i){
	int b = 0, w = 0, con = 0;
	char sym = 'a';
	
	//Loop through all of the elements
	for(auto &j : i){
		
//		cout << j << " " << con << "\n";
		
		//If the current piece is black
		if(j == 'B'){
			++b;
		}else if(j == 'W'){
			++w;
		}
		
		//If the current symbol is not equal to the previous symbol
		if(sym != j){
			sym = j;
			con = 1;
		}else{
			++con;
		}
		
		if(con >= 3){
			return false;
		}
	}
	return b == w;
}

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int n;
	char c;
	cin >> n;
	
	//Making the Adjacency matrix
	vector<vector<char>> mp(n, vector<char>(n));
	
	//Taking in the graph
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> mp[i][j];
		}
	}
	
	//checking each of the rows
	for(int i = 0; i < n; ++i){
		if(!check_row(mp[i])){
			cout << 0 << "\n";
			return 0;
		}
	}
	
	//Transpose the graph
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(i == j){
				break;
			}
			auto temp = mp[i][j]; 
			mp[i][j] = mp[j][i];
			mp[j][i] = temp;
		}
	}
	
	//Check each of the rows again
	for(int i = 0; i < n; ++i){
		if(!check_row(mp[i])){
			cout << 0 << "\n";
			return 0;
		}
	}
	
	cout << 1 << "\n";
	
}
