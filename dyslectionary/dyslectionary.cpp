//dyslectionary
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	vector<string> words;
	string word;
	int cc;
	
	//While it has not reached the end of file
	while(!cin.eof()){
		
		if(cc != 0){
			cout << "\n";
		}
		
		//Clear the vector
		words.clear();
		cc = 0;
		
		while(true){
			
			//Get the line
			getline(cin,word);
			
			//If the word is an empty string, the current test case is over
			if(word == ""){
				break;
			}
			
			//Reverse the word
			reverse(word.begin(),word.end());
			
			//If the word is longer than the longest word, update the longest word
			if(word.size() > cc){
				cc = word.size();
			}
			
			//Insert the word into the unordered set
			words.emplace_back(word);
		}
		
		//Sort the words
		sort(words.begin(), words.end());
		
		//Print out the words in order
		for(auto i : words){
			
			//If the word is not of the longest length
			if(cc > i.length()){
				//Add spaces to pad the word
				for(int j = 0; j < cc - i.length(); ++j){
					cout << " ";
				}
			}
			
			//Print out the word but in reverse order
			for(auto j = i.rbegin(); j != i.rend(); ++j){
				cout << *j;
			}
			
			//Print a new line after the word
			cout << "\n";
		}
		
	}
}
