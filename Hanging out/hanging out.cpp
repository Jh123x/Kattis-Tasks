//hanging out
#include <iostream>
using namespace std;

int main(){
	int group_d = 0, inputs, max, size, curr = 0;
	string k_word;
	cin >> max >> inputs;
	for(int i = 0; i < inputs; i++){
		cin >> k_word >> size;
		if(k_word == "leave"){
			curr -= size;
		}else if(k_word == "enter"){
			if(curr+size > max){
				group_d ++;
			}else{
				curr += size;
			}
		}
	}
	cout << group_d;
}
