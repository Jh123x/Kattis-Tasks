//Greedily increasing sequence
#include <bits/stdc++.h>
using namespace std;

int main(){
	long input,i, pre, curr = 0;
	cin >> input;
	cin >> pre;
	vector<long> s;
	s.push_back(pre);
	for(i = 1; i < input; i++){
		cin >> curr;
		if(curr > pre){
			pre = curr;
			s.push_back(curr);
		}
	}
	
	cout << s.size() << endl;
	for(i = 0; i < s.size(); i++){
		cout << s[i] << " ";
	}
}
