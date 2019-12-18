//Charting progress
#include <bits/stdc++.h>
using namespace std;

int count_stars(string &mp){
	//Count the number of stars inside the row
	int count = 0;
	for(int i = 0; i < mp.size(); ++i){
		if(mp[i] == '*'){
			++count;	
		}
	}
	return count;
}

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	vector<string> mp;
	vector<int> stars;
	int c, cc;
	string row;
	
	//Taking in the first row of the item
	while(getline(cin,row)){
		
		//Zeroing the vector
		mp.clear();
		stars.clear();
		
		//Add the first row into the map
		mp.emplace_back(row);
		
		//Getting in the rest of rows
		while(getline(cin,row)){
			if(row == ""){
				break;
			}
			mp.emplace_back(row);
		}
		
		//Getting the number of stars in each of the rows
		for(int i = 0; i < mp.size(); ++i){
			stars.emplace_back(count_stars(mp[i]));
//			cout << stars[i] << "\n";
		}
		
//		cout << mp.size() << "\n";
		
		cc = 0;
		//Printing out the correct sorted grid
		for(int i = 0; i < mp.size(); ++i){
//			cout << stars[i] << "\n";
			for(int j = 0; j < mp[i].size() - stars[i] - cc; ++j){
				cout << ".";
			}
			for(int j = 0; j < stars[i]; ++j){
				cout << "*";
			}
			for(int j = 0; j < cc; ++j){
				cout << ".";
			}
			
			cc += stars[i];
			cout << "\n";
		}
		
		cout << "\n";
		
	}
}
