//Grandpa Bernie
#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	unordered_map<string,vector<int>> mp;
	unordered_set<string> s;
	int travels, queries,i, year, time;
	string country;
	cin >> travels;
	for(i = 0; i < travels; i++){
		cin >> country >> year;
		mp[country].push_back(year);
		s.insert(country);
	}
	for(auto k: s){
		sort(mp[k].begin(),mp[k].end());	
	}
		
	cin >> queries;
	
	for(i = 0; i < queries; i++){
		cin >> country >> time;
		cout << mp[country][time-1] << "\n";
	}
	
	
}
