//Paragrams
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	string word;
	int rm = 0;
	cin >> word;
	
	map<char,int> mp;
	
	for(int i = 0; i < word.size(); ++i){
		mp[word[i]] += 1;
	}
	
	for(auto i : mp){
		if(i.second % 2 == 1){
			++rm;
		}
	}
	
	if(rm > 0){
		--rm;
	}
	cout << rm << "\n";
}
