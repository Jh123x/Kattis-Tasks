//hanging out
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	int max, grps, denied = 0, people = 0, p;
	string command;
	
	//Take in the max and the number of groups
	cin >> max >> grps;
	
	//Loop through all of the groups
	while(grps--){
		cin >> command >> p;
		
		if(command == "leave"){
			people -= p;
		}else if(command == "enter"){
			if(p + people > max){
				++denied;
			}else{
				people += p;
			}
		}
	}
	
	cout << denied;
}
