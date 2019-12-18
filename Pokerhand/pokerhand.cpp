//Pokerhand
#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<char> hand;
	string temp;
	for(int i = 0 ; i < 5 ; i++){
		cin >> temp;
		hand.push_back(temp[0]);
	}
	int max = 0,t;
	for(int i = 0; i < hand.size(); i++){
		t = count(hand.begin(),hand.end(),hand[i]);
		if(t > max){
			max = t;
		}
	}
	cout << max << endl;
	
}
