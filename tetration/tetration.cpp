//Tetration
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring variables
	double number;
	
	//Taking in the number
	cin >> number;
	
	//Giving the output in the correct number of places
	cout << fixed << setprecision(6);
	cout << pow(number, 1/number);
}
