//ostgotska
#include <bits/stdc++.h>
using namespace std;

int main(){
	double word_c = 0, a_word = 0;
	int i; 
	string input;
	while(cin >> input){
		word_c += 1;
		for(i = 0; i < input.size()-1; i ++){
			if ( input[i] == 'a' && input[i+1] == 'e'){
				a_word += 1;
				break;
			}
		}
	}	
	if(a_word >= 0.4 * word_c){
		cout << "dae ae ju traeligt va" << endl;
	}else{
		cout << "haer talar vi rikssvenska" << endl;
	}
}

