//Bus
#include<bits/stdc++.h>
using namespace std;

int main(){
	//Make code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int inputs, i, j, stops, passengers;
	
	cin >> inputs;
	for(i = 0; i < inputs; ++i){
		cin >> stops;
		passengers = 0;
		for(j = 0; j < stops; ++j){
			passengers = passengers * 2 + 1;
		}
		cout << passengers << "\n";
	}
}
