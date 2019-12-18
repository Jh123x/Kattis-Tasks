//symettric order
#include <bits/stdc++.h>
using namespace std;
int main(){
	int input, count = 1,i;
	string temp;
	vector<string> first;
	vector<string> second;
	do{
		cin >> input;
		first.clear();
		second.clear();
		for(i = 0; i < input; i++){
			cin >> temp;
			if(i%2 == 0){
				first.push_back(temp);	
			}
			else{
				second.push_back(temp);
			}
		}
		reverse(second.begin(), second.end());
		if(input != 0){
			cout << "SET " << count++ << "\n";	
		}
		for(i = 0; i < first.size(); i ++){
			cout << first[i] << "\n";
		}
		for(i = 0; i < second.size(); i++){
			cout << second[i] << "\n";
		}

	}while(input > 0);
}
