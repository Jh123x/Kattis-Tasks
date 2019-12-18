//Volim
#include<bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Initalise the vars
	int start, tests, time, ct = 0;
	char option;
	
	cin >> start >> tests;
	
	--start;
	while(tests--){
		cin >> time >> option;
		ct += time;
		if(ct >= 3*60+30){
			break;
		}
		
		if(option == 'T'){
			++start;
		}
	}
	cout << start % 8 + 1;
}
