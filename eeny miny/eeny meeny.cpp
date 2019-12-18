//eenymeeny
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	vector<string> a, b, p;
	string line;
	int players, len = -1, si = 0;
	
	//Take in the first line as the phrase
	getline(cin,line);
	stringstream ss;
	ss << line;
	
	//Getting the length of the line
	while(ss >> line){
		++len;
	}
	
	//Taking in the position of the players
	cin >> players;
	for(int i = 0; i < players; ++i){
		cin >> line;
		p.emplace_back(line);
	}
	
	//Running the simulation to see who is in which team
	for(int i = 0; i < players; ++i){
		//Calculate index of the player to be chose
		si = (si+len) % p.size();	
		
		//Adding the player to the team
		if(i % 2 == 1){
			b.emplace_back(p[si]);
		}else{
			a.emplace_back(p[si]);
		}
		
		//Remove the player
		if(p.size() == 1){
			p.erase(p.begin());	
		}else{
			p.erase(p.begin() + si);
		}
	}
	
	//Print out the people on both the teams
	cout << a.size() << "\n";
	for(auto i: a){
		cout << i << "\n";
	}
	
	cout << b.size() << "\n";
	for(auto i : b){
		cout << i << "\n";
	}
	
}
