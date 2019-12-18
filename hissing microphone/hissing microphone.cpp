//Hissing Microphone
#include <bits/stdc++.h>
using namespace std;

int main(){
	string input;
	cin >> input;
	for(long i = 0; i < input.size()-1; i++){
		if(input[i] == input[i+1] && input[i] == 's'){
			cout << "hiss\n";
			return 0;
		}
	}
	cout << "no hiss\n";
}
