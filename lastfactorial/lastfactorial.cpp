//lastfactorialdigit
#include <iostream>
using namespace std;

int main(){
	int store, inputs, temp;
	cin >> inputs;
	for(int i = 0; i <inputs; i++){
		cin >> temp;
		store = 1;
		for(int j = 1; j <= temp; j++){
			store *= j;
			store %= 10;
		}
		cout << store << "\n";
	}
	
}
