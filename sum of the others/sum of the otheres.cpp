//sum of the others
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	string line;
	int num, sum;
	
	//Creating the vector
	vector<int> s;
	
	//Getting in all of the different lines
	while(getline(cin,line)){
		//Resetting the vector
		s.clear();
		
		//Putting it into the string stream
		stringstream ss;
		ss << line;
		
		
		
		//Getting the tokenized form
		while(ss >> num){
			s.emplace_back(num);
		}
		
		for(int i = 0; i < s.size(); ++i){
			sum = 0;
			for(int j = 0; j < s.size(); ++j){
				if(i == j){
					continue;
				}
				sum += s[j];
			}
			if(sum == s[i]){
				cout << s[i] << "\n";
				break;
			}
		}
	}
	
}
