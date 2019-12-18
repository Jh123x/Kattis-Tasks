//secure doors
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the number of variables
	unordered_map<string,bool> mp;
	int cases;
	string name, action;
	
	cin >> cases;
	
	for(int i = 0; i < cases; ++i){
		//Take in the name of the person as well as the action
		cin >> action >> name;
		cout << name << " ";
		
		//Check the action
		if(action == "entry"){
			cout << "entered";
			if(mp[name]){
				cout << " (ANOMALY)";
			}else{
				mp[name] = true;
			}
		}else if(action == "exit"){
			cout << "exited";
			if(!mp[name]){
				cout << " (ANOMALY)";
			}else{
				mp[name] = false;
			}
		}
		cout << "\n";
	}
	
}
