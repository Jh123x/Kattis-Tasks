//dicecup
#include <bits/stdc++.h>
using namespace std;

int find_max(map<int,int> mp){
	int max = 0;
	for(pair<int,int> v : mp){
		if(v.second > max){
			max = v.second;
		}	
	}
	return max;
}

int main(){
	int f1, f2;
	cin >> f1 >> f2;
	map<int,int> mp;
	for(int i = 1; i <= f1; i++){
		for(int j = 0; j < f2; j++){
			if(mp.find(i+j) == mp.end()){
				mp[i+j] = 0;
			}
			mp[i+j] += 1;
		}
	}
	
	int m = find_max(mp);
	for(auto p : mp){
		if(p.second == m){
			cout << p.first+1 <<"\n";
		}
	}
}
