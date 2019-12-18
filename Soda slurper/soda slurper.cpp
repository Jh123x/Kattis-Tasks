//Soda slurper
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	double bottle, emp, cost, drank = 0;
	
	cin >> bottle >> emp >> cost;
	
	emp += bottle;
	bottle = 0;
	
	while(bottle > 0 || cost <= emp){
		while(emp >= cost){
			bottle += 1;
			emp -= cost;
		}
		++drank;
		++emp;
		--bottle;
	}
	
	cout << drank;
}
