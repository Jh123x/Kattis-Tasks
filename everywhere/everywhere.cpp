//everywhere
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int input,places, visit;
	string place;
	vector<string> visited;
	cin >> input;
	for(int i = 0; i < input; i++){
		visit = 0;
		cin >> places;
		for(int j = 0; j < places; j++){
			cin >> place;
			if(find(visited.begin(),visited.end(), place) !=  visited.end()){
				continue;
			}else{
				visit ++;
				visited.push_back(place);
			}
		}
		cout << visit << "\n";
	}
}
