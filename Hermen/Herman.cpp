//Herman
#include <bits/stdc++.h>
#define PI 3.14159265359
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	double rad;
	
	//Taking in the radius
	cin >> rad;
	
	//Print out the relavant values
	cout << fixed << setprecision(6) << rad * rad * PI << "\n" << rad * rad * 2;
}
