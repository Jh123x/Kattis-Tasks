//Skocimis
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Initialise the vars
	vector<int> v(3);
	int moves = 0;
	
	//Take in the position of the kangeroos
	for(int i = 0; i < 3; ++i){
		cin >> v[i];
	}
	
	//While there is still an empty space between them
	while(v[0] + 1 != v[1] || v[1] + 1 != v[2]){
		//Increment the moves by 1
		++moves;
		
		//Check if the value between which outer kangeroo and the center one is lower
		if(abs(v[0]-v[1]) < abs(v[2]-v[1])){
			v[0] = (v[1] + 1);	
		}else{
			v[2] = v[1] - 1;
		}
		
		//Sort the list
		sort(v.begin(),v.end());
	}
	
	cout << moves;
}
