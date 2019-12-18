//Odd man out
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	unordered_map<long,long> mp;
	unordered_set<long> s;
	long inputs, number, i, cases, k;
	
	cin >> cases;
	for(k = 1; k <= cases; k++){
		mp.clear();
		s.clear();
		cin >> inputs;
		
		for(i = 0; i < inputs; i++){
			cin >> number;
			mp[number] += 1;
			s.insert(number);
		}
		
		
		for(auto j: s){
			if(mp[j] == 1){
				cout << "Case #" << k << ": "<< j << "\n";
				break;
			}
		}
	}
	
	
	
}
