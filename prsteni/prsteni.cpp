//prsteni
#include <bits/stdc++.h>
using namespace std;

int euc_algo(int n1, int n2){
	//Euclidean algorithm to find GCD
	int m = n1%n2;
	while(m){
		n1 = n2;
		n2 = m;
		m = n1%n2;
	}
	return n2;
}

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	int total, gcd;
	cin >> total;
	
	//Creating the vector to store the gears
	vector<int> v(total);
	
	//Taking in all the gears
	for(int i = 0; i < total; ++i){
		cin >> v[i];
	}
	
	//Print out the answer
	for(int i = 1; i < total; ++i){
		gcd = euc_algo(v[0],v[i]);
		cout << v[0]/gcd << "/" << v[i]/gcd << "\n";
	}
	
}
