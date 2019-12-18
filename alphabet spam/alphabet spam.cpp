//Alphabet spam
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double w_space = 0, lc = 0, uc = 0, sym = 0;
	string input;
	cin >> input;
	
	for(int i =0 ;i < input.size(); i++){
		if(input[i] == '_'){
			w_space++;
		}else if((int) input[i] <= 90 && (int) input[i] >= 65){
			uc++;
		}else if((int) input[i] <= 122 && (int) input[i] >= 97){
			lc++;
		}else{
			sym++;
		}
	}
	cout << fixed << setprecision(13);
	cout<< w_space/input.size() << "\n" << lc/input.size() << "\n" << uc/input.size() << "\n" << sym/input.size() << "\n";
}
