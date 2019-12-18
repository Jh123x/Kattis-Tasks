//Boat parts
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Initialise the variables
	int parts, days;
	string item;
	unordered_set<string> items;
	
	//Taking in the number of parts as well as the days
	cin >> parts >> days;
	
	//Looping through all of the days
	for(int i = 1; i <= days; ++i){
		cin >> item;
		items.insert(item);
		if(items.size() == parts){
			cout << i;
			return 0;
		}
	}
	
	cout << "paradox avoided";
	
}
