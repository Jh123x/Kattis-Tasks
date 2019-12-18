//rijeci
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int pressed, first = 0, second = 1, i, temp;
	
	cin >> pressed;
	
	if(pressed == 1){
		cout << first << " " << second << "\n";
		return 0;
	}
	
	for(i = 0; i < pressed-1; ++i){
		temp = first + second;
		first = second;
		second = temp;
	}
	cout << first << " " << second << "\n";
	
	
}
