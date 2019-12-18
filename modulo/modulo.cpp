//Modulo
#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<long> v(42);
	for(auto &j : v){
		j = 0;
	}
	long temp, i, result;
	for(i = 0; i < 10; i++){
		cin >> temp;
		v[temp%42] = 1;
	}
	
	result = 0;
	for(auto j : v){
		if(j == 1){
			result += 1;
		}
	}
	
	cout << result << endl;
	
}
