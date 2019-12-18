//Prva
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Clearing the vars
	int rows, cols;
	string acc = "";
	set<string> words;
	cin >> rows >> cols;
	
	//Create the AM
	vector<vector<char>> mp(rows,vector<char>(cols));
	
	//Put values into the AM while scanning horizontally
	for(int i = 0; i < rows; ++i){
		acc = "";
		for(int j = 0; j < cols; ++j){
			cin >> mp[i][j];
			if(mp[i][j] == '#'){
				if(acc.size() >= 2){
					words.insert(acc);
				}
				acc = "";
			}else{
				acc += mp[i][j];
			}
		}
		if(acc.size() >= 2){
			words.insert(acc);
		}
	}
	
	//Scan the AM vertically
	for(int i = 0; i < cols; ++i){
		acc = "";
		for(int j = 0; j < rows; ++j){
			if(mp[j][i] == '#'){
				if(acc.size() >= 2){
					words.insert(acc);
				}
				acc = "";
			}else{
				acc += mp[j][i];
			}
		}
		if(acc.size() >= 2){
			words.insert(acc);
		}
	}
	
	//Print out the word at the front of the set
	cout << *words.begin();
	
}
