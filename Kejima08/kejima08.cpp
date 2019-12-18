//kejima08
#include<bits/stdc++.h>
using namespace std;
bool contains(char a){
	char v[] = {'a', 'e', 'i' , 'o', 'u'};
	for(int i = 0; i < 5 ; ++i){
		if(v[i] == a){
			return true;
		}
	}
	return false;
}

int main(){
	//Make code run faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring variables
	string word;
	
	int i;
	
	//Loop and get all the words
	while(cin >> word){
		for(i = 0; i < word.size(); ++i){
			if(contains(word[i])){
				cout << word[i];
				i += 2;
			}else{
				cout << word[i];
			}
		}
		cout << ' ';
	}
	
}
