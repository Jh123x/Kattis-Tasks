//broken sword
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declare the variables
	int swords, tb = 0, lr = 0, s = 0;
	string sword;
	
	//Take in the number of broken swords
	cin >> swords;
	
	//Take in the number of swords as strings
	while(swords--){
		cin >> sword;
		for(int i = 0; i < 4; ++i){
			if(sword[i] == '0'){
				if(i < 2){
					++tb;
				}else{
					++lr;
				}
			}
		}
	}
	
	//Construct swords using the pieces;
	while(tb >= 2 && lr >= 2){
		tb -= 2; 
		lr -= 2;
		++s;
	}
	
	cout << s << " " << tb << " " << lr;
	
}
