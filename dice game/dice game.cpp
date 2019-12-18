//Dice game
#include <bits/stdc++.h>
using namespace std;

int main(){
	long g_score = 0, e_score = 0, temp;
	for(int i = 0; i < 4; i++){
		cin >> temp;
		g_score += temp;
	}
	for(int i = 0; i < 4; i++){
		cin >> temp;
		e_score += temp;
	}
	
	if(e_score == g_score){
		cout << "Tie" << endl;
	}else if (e_score > g_score){
		cout << "Emma" << endl;
	}else{
		cout << "Gunnar" << endl;
	}
}
