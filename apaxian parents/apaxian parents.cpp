//apaxian parents
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	// Initialise the vars
	string son, parent;
	
	//Obtain the names
	cin >> son >> parent;
	
	//Checking for the exceptions
	if(son[son.size()-1] == 'e'){
		cout << son << 'x' << parent;
		return 0;
	}else if(son[son.size()-1] == 'x' && son[son.size()-2] == 'e'){
		cout << son << parent;
		return 0;
	}
	
	if(son[son.size()-1] == 'a' || son[son.size()-1] == 'e' || son[son.size()-1] == 'i' || son[son.size()-1] == 'o' || son[son.size()-1] == 'u'){
		son = son.substr(0,son.size()-1);
	}
	
	cout << son << "ex" << parent;
	return 0;
}
