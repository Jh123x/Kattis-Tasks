//Mia
#include <bits/stdc++.h>
using namespace std;

int count_score(int p11, int p12){
	int sw1;
	if(p11+p12 == 3){
		sw1 = 1000;
	}else if(p11 == p12){
		sw1 = p11 * 10 + p12;
		sw1 *= 10;
	}else{
		if(p11 > p12){
			sw1 = p11 *10 + p12;
		}else{
			sw1 = p12 * 10 + p11;
		}
		
	}
	return sw1;
}

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	int p11, p21, p12, p22, temp, sw1, sw2;
	
	while(cin >> p11 >> p12 >> p21 >> p22){
		
		//Check if it is the end condition
		if(p11+ p12 + p21 + p22 == 0){
			break;
		}
	
		//Check if any players has 12 or 21
		sw1 = count_score(p11,p12);
		sw2 = count_score(p21, p22);
		
		if(sw1 == sw2){
			cout << "Tie.\n";
		}else if(sw1 > sw2){
			cout << "Player 1 wins.\n";
		}else{
			cout << "Player 2 wins.\n";
		}
	}
	
}
