//Unbearable Zoo
#include <bits/stdc++.h>
using namespace std;

string to_lower_case(string str){
	string result = "";
	for(auto i: str){
		result += tolower(i);
	}
	return result;
}

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the varaibles
	unordered_map<string,int> mp;
	set<string>s;
	string animal;
	stringstream ss;
	int inputs, i, j, count = 1;
	
	while(cin >> inputs){
		
		//Check if the input is 0
		if(inputs == 0){
			break;
		}
		cin.get();
		
		//Reset the data structures
		mp.clear();
		s.clear();
		
		//Take in the number of inputs;
		for(i = 0; i < inputs; ++i){
			getline(cin,animal);
			
			//Getting the last word of the line in lower case
			j = animal.size()-1;
			while(animal.size() - j > 0 && animal[j] != ' '){
				--j;
			}
			if(j < 0){
				j = -1;	
			}
			animal = to_lower_case(animal.substr(j+1,animal.size()));
			
			//Add the animal to the data struc
			mp[animal] += 1;
			s.insert(animal);
		}
		cout << "List " << count++ << ":\n";
		for(auto k: s){
			cout << k << " | " << mp[k] << "\n"; 
		}
	}
		
	
}
