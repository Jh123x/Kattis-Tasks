//Forests
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int person, tree, cc;
	unordered_map<int,vector<int>> mp;
	
	
	//Taking in the inputs which are 
	while(cin >> person >> tree){
		mp[person].emplace_back(tree);
	}
	
	
	
}
