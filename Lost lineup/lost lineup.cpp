//lostlineup
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	int people, pos;
	cin >> people;
	
	//Creating the vector
	vector<int> ppl(people);
	
	//Adding jimmy to the front of the queue
	ppl[0] = 1;
	
	
	//Loading the rest of the people into the queue
	for(int i = 2; i <= people; ++i){
		cin >> pos;
		ppl[pos+1] = i;
	}
	
	//Print out the order they must be in
	for(auto i: ppl){
		cout << i << " ";
	}
}
