//Yingyang stones
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code run faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	string stones;
	int black= 0, white = 0;
	cin >> stones;
	
	for(auto i: stones){
		if(i == 'B'){
			black += 1;
		}else{
			white += 1;
		}
	}
	
	if(black == white){
		cout << "1\n";
	}else{
		cout << "0\n";
	}
	
	
	
}
