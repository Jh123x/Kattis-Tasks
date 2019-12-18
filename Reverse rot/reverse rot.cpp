//Reverse rot
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code run faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int rotation, i;
	string word, result, alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
	
	while(cin >> rotation){
		if(rotation == 0){
			break;
		}
		cin >> word;
		result = "";
		for(i = 0; i < word.size(); ++i){
			auto it = find(alpha.begin(),alpha.end(),word[i]);
			result = alpha[(distance(alpha.begin(), it)+rotation) % 28] + result;
		}
		cout << result << "\n";
	}
}

