//zamka
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
	int L,D,X,N,M;
	cin >> L >> D >> X;
	for(int i = L; i <= D; i++){
		if(get_digit_sum(i) == X){
			N = i;
			break;
		}
	}
	for(int i=D; i >= L; i--){
		if(get_digit_sum(i) == X){
			M = i;
			break;
		}
	}
	cout << N << "\n" << M;
	
	
	
}
