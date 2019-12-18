//closing the loop
#include<bits/stdc++.h>
using namespace std;

int stoi(string &r){
	int result = 0;
	while(r.size() > 0){
		result += r[r.size()-1] - '0';
		r = r.substr(0,r.size());
	}
	return result;
}

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int tests, ribbons, length, num;
	string rib;
	vector<int> red, blue;
	
	//Taking in the number of cases
	cin >> tests;
	
	//Looping through all of the cases
	for(int i = 1; i <= tests; ++i){
		
		//Print the current case
		cout << "Case #" << i << ": ";
		
		//Resetting all of the vectors
		red.clear();
		blue.clear();
		length = 0;
		
		//Taking in the number of ribbons
		cin >> ribbons;
		
		//Looping through all of the ribbons and adding them to the correct lists
		for(int j = 0; j < ribbons; ++j){
			cin >> rib;
			num = stoi(rib.substr(0,rib.size()));
			if(rib[rib.size()-1] == 'R'){
				//Todo
				red.emplace_back(num);
			}else{
				//Todo
				blue.emplace_back(num);
			}
		}
		
		//Sort the ribbons
		sort(red.begin(), red.end());
		sort(blue.begin(),blue.end());
		
		while(blue.size() > 0 && red.size() > 0){
//			cout << blue.back() << " " << red.back() << "\n";
			length += blue.back() + red.back() - 2;
			blue.pop_back();
			red.pop_back();
		}
		if(length < 0){
			cout << 0 << "\n";
		}else{
			cout << length << "\n";
		}
	}
}
