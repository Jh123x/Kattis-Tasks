//Seven wonders
#include <bits/stdc++.h>
using namespace std;

int main(){
	string cards;
	long i, score = 0, T = 0, C = 0, G = 0;
	cin >> cards;
	for(i = 0; i < cards.size(); i++){
		if(cards[i] == 'T'){
			T += 1;
		}else if(cards[i] == 'C'){
			C += 1;
		}else if(cards[i] == 'G'){
			G += 1;
		}
	}
	score = T*T + C*C + G*G;
	while(T>0 && C>0 && G >0){
		score += 7;
		T--; G--; C--;
	}
	cout << score << endl;
}
