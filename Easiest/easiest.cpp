//Easiest
#include <iostream>
using namespace std;

int get_digit_sum(int number){
	int result = 0;
	while(number > 0){
		result += number %10;
		number /= 10;
	}
	return result;
}

int main(){
	int input=1, D_sum, result, temp;
	while(true){
		cin >> input;
		if(input == 0){
			return 0;
		}
		D_sum = get_digit_sum(input);
		for(int i = 11; i <= 100000;i++){
			result = input*i;
			if(get_digit_sum(result) == D_sum){
				cout << i <<"\n";
				break;
			}
		}
	}
}
