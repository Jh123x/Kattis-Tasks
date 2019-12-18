//Star arrangements
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	int stars;
	
	//Take in the number of stars
	cin >> stars;
	
	//Print out the first line required
	cout << stars << ":\n";
	
	//While the number of stars is lower than required
	for(int i = 2; i < stars; ++i){
		if(stars % (2*i-1) == 0 || (stars - i) % (2*i-1) == 0){
			cout << i << "," << i-1 << "\n";
		}
		if(stars % i == 0){
			cout << i << "," << i << "\n";
		}
		
	}
}
