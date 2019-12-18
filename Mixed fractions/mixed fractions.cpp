//Mixed fractions
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make 9the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	long nu, denom;
	
	while (cin >> nu >> denom){
		if(nu + denom == 0){
			break;
		}
		cout << nu / denom << " " << nu%denom << " / " << denom << "\n";
	}
}
