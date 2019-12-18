//esej
#include <bits/stdc++.h>
using namespace std;

string generate_word(int number){
	string alpha = "abcdefghijklmnopqrstuvwxyz";
	if(number <26){
		return string(1,alpha[number%26]);
	}else{
		string result = "";
		for(int i = 0; i < 15; i++){
			result += alpha[rand()%26];
		}
		return result;
	}
}

int main(){
	set<string> words_used;
	string word;
	int a,b,i,s1;
	cin >> a >> b;
	for(i = 0; i < (b+2)/2; i++){
		word = generate_word(i);
		s1 = words_used.size();
		words_used.insert(word);
		if(s1 == words_used.size()){
			i--;
		}
	}
	auto it = words_used.begin();
	for(i = 0; i < (b+a)/2; i++){
		if(it != words_used.end()){
			cout << *it++ << " ";
		}else{
			cout << *words_used.begin() << " ";
		}
		
	}
}
