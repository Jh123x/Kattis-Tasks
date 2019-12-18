//Tri
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars;
	vector<double> v(3);
	
	//Taking in the ints
	cin >> v[0] >> v[1] >> v[2];
	
	//Brute force all the possibilities
	if(v[0] + v[1] == v[2]){
		cout << v[0] << "+" << v[1] << "=" << v[2];
	}else if(v[0] == v[1] + v[2]){
		cout << v[0] << "=" << v[1] << "+" << v[2];
	}else if(v[0] - v[1] == v[2]){
		cout << v[0] << "-" << v[1] << "=" << v[2];
	}else if(v[0] == v[1] - v[2]){
		cout << v[0] << "=" << v[1] << "-" << v[2];
	}else if(v[0] / v[1] == v[2]){
		cout << v[0] << "/" << v[1] << "=" << v[2];
	}else if(v[0] == v[1] / v[2]){
		cout << v[0] << "=" << v[1] << "/" << v[2];
	}else if(v[0] * v[1] == v[2]){
		cout << v[0] << "*" << v[1] << "=" << v[2];
	}else if(v[0] == v[1] * v[2]){
		cout << v[0] << "=" << v[1] << "*" << v[2];
	}
	
	
	
}
