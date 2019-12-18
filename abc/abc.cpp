//abc
#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v(3);
	string order;
	for(int &i: v){
		cin >> i;
	}
	sort(v.begin(),v.end());
	cin >> order;
	
	for(int i = 0; i < 3; i++){
		cout << v[order[i] - 'A'] << " ";
	}	
}
