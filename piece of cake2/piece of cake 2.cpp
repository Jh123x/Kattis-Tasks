//Piece of cake
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int side, h, v, result;
	
	cin >> side >> h >> v;
	
	result = 4;
	
	//Taking into account the horizontal cut
	if(side - h > h){
		result *= side - h;
	}else{
		result *= h;
	}
	
	//Taking into account the vertical height
	if(side - v > v){
		result *= side - v;
	}else{
		result *= v;
	}
	
	//Print out the volume of the cake
	cout << result << "\n";
	
}
