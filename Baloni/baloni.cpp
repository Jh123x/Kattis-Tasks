//Baloni
#include <bits/stdc++.h>
using namespace std;

int main(){
	long inputs, temp;
	cin >> inputs;
	deque<long> balloons;
	vector<long> tbr;
	for(long i = 0; i < inputs; i++){
		cin >> temp;
		balloons.push_back(temp);
	}
	long count = balloons[0];
	tbr.push_back(count);
	for(long i = 1; i < balloons.size(); i++){
		count--;
		
	}
	
}
