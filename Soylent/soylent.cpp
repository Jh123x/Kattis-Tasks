//Soylent
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	int cases;
	double calories;
	
	cin >> cases;
	
	while(cases--){
		cin >> calories;
		cout <<  ceil(calories/400) << "\n";
	}
}
