//Relocation
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the number of variables
	unordered_map<int,int> mp;
	int companies, queries, command, x, y;
	
	//Taking in the companies and queries
	cin >> companies >> queries;
	
	//Initialise the companies
	for(int i = 1; i <= companies; ++i){
		cin >> x;
		mp[i] = x;
	}
	
	//Start to execute the queries and the sequences
	while(queries--){
		cin >> command >> x >> y;
		
		//Execute the command
		switch(command){
			case 1:{
				//Move the company to the new position
				mp[x] = y;
				break;
			}
			case 2:{
				//Query the position of the companies
				cout << abs(mp[x]-mp[y]) << "\n";
				break;
			}
		}
	}
}
