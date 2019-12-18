//early winter
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int years, current, c = 0, curr;
	
	//Get the input for the years and the current
	cin >> years >> current;
	
	//Loop through the number of years
	for(int i = 0; i < years; ++i){
		cin >> curr;
		if(curr <= current){
			cout << "It hadn't snowed this early in " << i << " years!";
			return 0;
		}
	}
	cout << "It had never snowed this early!";
}
