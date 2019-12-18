//Skener
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	int row,col,rx,cx;
	
	//Taking in the vars
	cin >> row >> col >> rx >> cx;
	
	//Making the AM to store the row and col
	vector<vector<char>> mp(row,vector<char>(col));
	
	//Taking in the AM
	for(int i = 0; i < row; ++i){
		for(int j = 0; j < col; ++j){
			cin >> mp[i][j];
		}
	}
	
	//Accumulating to the AM with the magnification
	for(int i = 0; i < row*rx; ++i){
		for(int j = 0; j < col*cx; ++j){
			cout << mp[i/rx][j/cx];
		}
		cout << "\n";
	}
}
