//Pet
#include<iostream>
using namespace std;

int main(){
	int max = 0, win_i = 0, temp, total;
	for(int i = 1; i <= 5; ++i){
		total = 0;
		for(int j = 0; j < 4; j++){
			cin >> temp;
			total += temp;
		}
		if(total > max){
			max = total; win_i = i;
		}
	}
	cout << win_i << " " << max;
}
