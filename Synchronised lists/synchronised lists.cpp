//Synchronised lists
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Initialising the vars
	unordered_map<long,long> mp;
	vector<long> ls1;
	vector<long> ls2;
	long i, temp, inputs, cases;
	
	
	//Starting the while loop
	while(cin >> cases){
		//Break the loop if the input is 0
		if(cases == 0){
			break;
		}
		
		//Clearing all the variables
		mp.clear();
		ls1.clear();
		ls2.clear();
		
		//Get the amount of terms
		for(i = 0; i < cases; i++){
			cin >> temp;
			mp[temp] = i;
			ls1.push_back(temp);	
		}
	
		//Take in the input for the unordered list		
		for(i = 0; i < cases; i++){
			cin >> temp;
			ls2.push_back(temp);
		}
		
		//Sort both the list
		sort(ls1.begin(),ls1.end());
		sort(ls2.begin(),ls2.end());
		
		//Create a new vector
		vector<long> l(cases);
		
		//Put the items in the correct order in the other vector
		for(i = 0; i < cases; i++){
			l[mp[ls1[i]]] = ls2[i];
		}
		
		//Print out the vector
		for(auto j : l){
			cout << j << "\n";
		}
		cout << "\n";
	}
	
}
