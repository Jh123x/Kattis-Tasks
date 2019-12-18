//parking 2

#include <bits/stdc++.h>
using namespace std;

int distance(vector<int> v, int pos){
	for(int i : v){
		
	}
}

int min_distance(vector<int> v){
	int min = 999999
	for(int i = 0; i < v[v.size()-1]; i++){
		
	}
}

int main(){
	int inputs, cases, temp;
	vector<int> v;
	cin >> inputs;
	for(int i = 0, i < inputs; i++){
		v.clear();
		cin >> cases;
		for(int j = 0; j < cases; j++){
			cin >> temp;
			v.push_back(temp);
		}
		sort(v.begin(),v.end());
		temp = min_distance(v);
		cout << temp;
	}
}
