//Run length encoding run
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	char command, prev, letter, sc;
	int count;
	string word;
	
	cin >> command >> word;
	
	switch(command){
		case 'E':{
			//Loop through the word
			for(int i = 0; i < word.size(); ++i){
				//If it i the first letter initialise the count
				if(i == 0){
					count = 1;
				}else if(prev != word[i]){
					//If it is different from the previous letter print the previous letter
					cout << prev << count;
					//Reset the count
					count = 1;
				}else{
					//Else it is the same as the previous letter
					++count;
				}
				//Set the current letter to the previous letter
				prev = word[i];
			}
			//Print out the last letter
			cout << prev << count;
			break;
		}
		case 'D':{
			//Loop through the word
			for(int i = 0; i < word.size(); ++i){
				if(i%2 == 0){
					letter = word[i];
				}else{
					for(int j = 0; j < word[i] - '0'; ++j){
						cout << letter;
					}
				}
			}
			break;
		}
	}
}
