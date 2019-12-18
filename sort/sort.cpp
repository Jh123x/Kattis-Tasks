//Sort
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declare the vars
	map<long long int,long long int> freq;
	priority_queue<pair<long long int, long long int>> pq;
	long long int inputs, val, temp;
	
	//Taking in the values
	cin >> inputs >> val;
	
	//Taking the input and adding it to a map
	for(long long int i = 0; i < inputs; ++i){
		cin >> temp;
		if(temp <= val){
			freq[temp] += 1;
		}
	}
	
	//Going through the map and looking for the values and adding them to the counting sort matrix
	
	
	
}
