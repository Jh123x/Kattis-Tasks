//detailed differences
#include <iostream>
#include <string>
using namespace std;

int main(){
	int inputs;
	string s1,s2,result;
	
	cin >> inputs;
	for(int i = 0; i < inputs; i++){
		result = "";
		cin >> s1 >> s2;
		for(int j = 0 ; j < s1.size(); j++){
			if(s1[j] == s2[j]){
				result += ".";
			}else{
				result += "*";
			}
		}
		cout << s1 << "\n" << s2 << "\n";
		cout << result << "\n\n";
	}
}
