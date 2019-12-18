//icpc awards
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int inputs, i;
	string school, team;
	vector<string> schools;
	unordered_map<string,string> mp;
	
	cin >> inputs;
	for(i = 0; i < inputs; ++i){
		cin >> school >> team;
		if(find(schools.begin(),schools.end(),school) == schools.end()){
			schools.push_back(school);
			mp[school] = team;
		}
	}
	
	for(i = 0; i < 12; ++i){
		cout << schools[i] << " " << mp[schools[i]] << "\n";
	}
	
}
