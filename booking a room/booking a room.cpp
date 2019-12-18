//booking a room

#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	register unsigned short int bucket, cases, i, temp;
	cin >> bucket >> cases;
	
	if(bucket == cases){
		cout << "too late";
	}
	
	vector<bool> room(bucket+1);
	for(i = 0; i < cases; i++){
		cin >> temp;
		room[temp] = true;
	}
	
	for(i = 1; i <= bucket; i++){
		if(room[i] == false){
			cout << i;
			break;
		}
	}
	
}
