//Ladice
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Create an unordered_map for storing the items
	int items, drawers, first, second;
	unordered_map<int,int> other;
	
	//Take in the number of items an drawers
	cin >> items >> drawers;
	
	//Initialise the vector
	vector<bool> drawer(drawers+1);
	
	
	for(int i = 0; i < items; ++i){
		cin >> first >> second;
		if(!drawer[first]){
			drawer[first] = true;
			other[first] = second;
			cout << "LADICA\n";
		}else if(!drawer[second]){
			drawer[second] = true;
			other[second] = first;
			cout << "LADICA\n";
		}else{
			cout << "SMECE\n";
		}
	}
	
	
	
}
