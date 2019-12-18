//fibonacci
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long occurence, t, counter = 1, i, j, k;
	string seq, acc, s4, temp;
	while(cin >> t){
		occurence = 0;
		cin >> seq;
		s4 = "10110";
		
		if(t == 0){
			if(seq != "0"){
				cout << "Case #" << counter++ << ": " << 0 << "\n";
			}
			cout << "Case #" << counter++ << ": " << 1 << "\n";
		}
		
		for(i = 0; i < t-4; i++){
			s4 = s4 + s4.substr(0,s4.size()-2);
		}
		
		//Count the number of occurences
		for(j = 0; j < s4.size() - seq.size();  j++){
			for(k = 0; k < seq.size(); k++){
				if(s4[k] != seq[k]){
					break;
				}
			}
			if(k == seq.size()){
				++occurence;
			}
		}
		
		
		occurence = occurence;
		
		cout << "Case #" << counter++ << ": " << occurence << "\n";
	}
}
