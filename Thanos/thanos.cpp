//Thanos
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Initialise the variables
	long cases, i, population, rate, food, year;
	
	//Taking in the number of cases
	cin >> cases;
	
	//Loop base on the number of cases
	for(i = 0; i < cases; i++){
		
		//Take the number of food within each line
		cin >> population >> rate >> food;
		
		//Zero relavant  vars
		year = 0;

		while(population <= food){
			++year;
			population *= rate;
		}
		
		//Output the answer
		cout << year << "\n";
	}
	
}
