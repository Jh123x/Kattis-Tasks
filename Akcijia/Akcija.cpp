//Akcija
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Initialise the variables;
	priority_queue<int> pq;
	int cases, temp, i, cost = 0;
	
	//Number of cases
	cin >> cases;
	
	
	//Adding the cost of all the items to the priority queue
	for(i = 0; i < cases; i++){
		cin >> temp;
		pq.push(temp);
	}
	
	//Take out the items in multiples of 3
	while(pq.size() >= 3){
		cost += pq.top();
		pq.pop();
		cost += pq.top();
		pq.pop();
		pq.pop();
	}
	
	//Add the remaining items
	while(pq.size() > 0){
		cost += pq.top();
		pq.pop();
	}
	
	//Print out the final cost of the items
	cout << cost << "\n";
}

