//job expenses
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int q, num, total = 0;
	
	//Taking in the input;
	cin >> q;
	
	//Loop through the queries
	while(q--){
		cin >> num; 
		if(num < 0){
			total -= num;
		}
	}
	
	//Output the total
	cout << total;
}
