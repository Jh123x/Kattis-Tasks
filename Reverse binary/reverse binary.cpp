//reverse binary
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars;
	int num, result = 0;
	string bin = "";
	
	//Taking in the number
	cin >> num;
	
	//Convert the number to reverse binary
	while(num > 0){
		if(num % 2 == 1){
			bin += '1';
		}else{
			bin += '0';
		}
		num /= 2;
	}
	
	//Convert the reverse binary number to int
	int exp = 0;
	while(bin.size() > 0){
		if(bin[bin.size()-1] == '1'){
			result += pow(2,exp);
		}
		bin = bin.substr(0,bin.size()-1);
		++exp; 
	}
	cout << result;
}
