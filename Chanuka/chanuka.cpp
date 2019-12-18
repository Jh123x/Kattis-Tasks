//chanuka 
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declare the variables
	int tests, set;
	double days;
	
	//Take in the number of test cases
	cin >> tests;
	
	//Loop for each of the testcases
	while(tests--){
		//Take in the variables for each case
		cin >> set >> days;
		cout << set << " " << (int) (days/2 * (2 + (days-1)) + days) << "\n";
	}
	
	
}
