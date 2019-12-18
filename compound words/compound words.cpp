//Compund Words
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Define variables
	set<string> s, words;
	string word;
	
	//Taking in the words till end of file
	while(cin >> word){
		s.insert(word);
	}
	
	//Forming the different permutations
	for(auto i: s){
		for(auto j: s){
			if(i != j){
				words.insert(i+j);
			}
		}
	}
	
	//Printing out the wordss
	for(auto i: words){
		cout << i << "\n";
	}
}
