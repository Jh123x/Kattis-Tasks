//Some sum
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int nums;
	cin >> nums;
	
	//If the number is divisible by 4 then it must be even
	if(nums % 4 == 0){
		cout << "Even\n";
	}
	
	//If it is not divisible by 2 it must be either
	else if(nums % 2 == 1){
		cout << "Either\n";
	}
	
	//Otherwise it is odd
	else{
		cout << "Odd\n";
	}
}
