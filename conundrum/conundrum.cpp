//conundrum
#include <iostream>
using namespace std;

int main(){
	int count = 0;
	string word,name = "PER";
	cin >> word;
	
	for(int i=0; i < word.size(); i++){
		if(word[i] == name[i%3]){
			continue;
		}else{
			count++;
		}
	}
	cout << count;
}
