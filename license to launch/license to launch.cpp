//license to launch
#include <bits/stdc++.h>
using namespace std;

int min(vector<int> v){
	int min = 0;
	for(int i = 1; i < v.size(); i++){
		if(v[i] < v[min]){
			min = i;
		}
	}
	return min;
}

int main(){
	int input, temp; 
	vector<int> v;
	cin >> input;
	for(int i =0; i < input; i++){
		cin >> temp;
		v.push_back(temp);
	}
	cout << min(v);
	
}
