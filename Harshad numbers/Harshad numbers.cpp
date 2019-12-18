//harshad numbers;
#include <bits/stdc++.h>
using namespace std;

long long digit_sum(long long number){
	long long result = 0;
	while(number > 0){
		result += number %10;
		number /= 10;
	}
	return result;
}

int main(){
	//Make code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declare the variables
	long long number;
	
	cin >> number;
	
	while(number % digit_sum(number) != 0){
		++number;
	}
	
	cout << number << "\n";
	
	
}
