//Which base
#include<bits/stdc++.h>
using namespace std;

int get(int number, int base){
	int back, result = 0, mul = 0;
	
	//Loop through all the digits in the number
	while(number > 0){		
		//Getting the last digit
		back = number%10;
		
		
		//Check if the digit is greater than or equal to the base digit
		if(back >= base){
			return 0;
		}
		
		//Accumulating to the result
		result += back * pow(base,mul);
		
		//Increment power and decrement number
		mul++;
		number = number/10;
	}
	return result;
}

int main(){
	int inputs, line, number; 
	cin >> inputs;
	for(int i = 0; i < inputs; i++){
		cin >> line >> number;
		cout << line << " " << get(number,8) << " " << number <<" " << get(number,16) << endl;
	}
}
