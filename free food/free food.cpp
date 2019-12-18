//Freefood
#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v(366);
	for(auto &j: v){
		j = 0;
	}
	long inputs,i, start,end,k, result = 0;
	cin >> inputs;
	for(i = 0; i < inputs; i++){
		cin >> start >> end;
		for(k = start; k <=end;k++){
			v[k] += 1;
		}
	}
	
	for(i = 0; i < v.size(); i++){
		if(v[i] > 0){
			result += 1;
		}
	}
	cout << result << endl;
	
}
