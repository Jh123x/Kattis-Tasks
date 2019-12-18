//Running MOM
#include <bits/stdc++.h>
using namespace std;

set<string> countries;
unordered_map<string,int> v_status;
unordered_map<string,bool> cycle;
unordered_map<string,vector<string>> mp;

bool check_c(string &c){
	if(v_status[c] == 2){
		return cycle[c];
	}else if(v_status[c] == 1){
		cycle[c] = true;
		return true;
	}else{
		
	}
}

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	string start, end;
	int flights;
	
	//Take in no of flights
	cin >> flights;
	
	//Take in all the flights paths
	while(flights--){
		cin >> start >> end;
		//Add the flight into the adjacency list
		mp[start].push_back(end);
		countries.insert(start);
		countries.insert(end);
	}
	
	
	while(cin >> start){
		cout << start << " " << (check_c(start) ? "safe" : "trapped") << "\n";
	}
	
}
