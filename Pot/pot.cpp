//Pot
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	long long int result = 0,temp;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> temp;
		result += pow((temp/10),(temp%10));
	}
	cout << result;
	
}
