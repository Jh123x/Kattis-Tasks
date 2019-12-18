//Runnning MoM
#include <bits/stdc++.h>
using namespace std;

void find_cycle(unordered_map<string,unordered_set<string>> &mp, unordered_map<string,bool> &dat, string &start){
	//Find the cycles within the map
	
	//Making a queue
	deque<string> q;
	unordered_set<string>visited;
	string curr;
	
	//Adding the start to the queue
	q.push_back(start);
	
	while(q.size() > 0){
		//Getting the last element of the queue
		curr = q.back();
		q.pop_back();
		
		//Adding the node to the visited node
		visited.insert(curr);
		
		
	}
}

int main(){
	//Make code run faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Initialise the variables
	int inputs, i;
	string city1, city2, temp;
	unordered_set<string> cities; //Store the names of all the cities
	unordered_map<string, unordered_set<string>> mp; // Store the list of cities in which 1 city is connected to
	unordered_map<string,bool> dat; //Store the check to see if the city is safe
	
	
	//Taking in the input
	cin >> inputs;
	
	//Taking in the input for the cities
	for(i = 0; i < inputs; ++i){
		cin >> city1 >> city2;
		cities.insert(city1);
		cities.insert(city2);
		mp[city1].insert(city2);
		mp[city2].insert(city1);
	}
	
	//Checking each of the cities to see if there is a cycle
	for(auto j: cities){
		find_cycle(mp, dat, vector<string>(), j, j);
	}
	
	//While there is input, take in the cities and output if they are safe
	while(cin >> temp){
		if(dat[temp]){
			cout << temp << " safe\n";
		}else{
			cout << temp << " trapped\n";
		}
	}
	
	
	
	
}
