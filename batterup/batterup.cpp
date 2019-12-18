//batterup
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int input;
	long double count=0,sum=0, temp;
	
	cin >> input;
	for(int i=0;i < input;i++){
		cin >> temp;
		if(temp >=0){
			sum += temp;
			count++;
		}
	}
	cout << std::fixed;
	cout << std::setprecision(13) << sum/count;
	
}
