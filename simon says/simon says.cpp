//Simon says
#include <bits/stdc++.h>
using namespace std;

int main(){
	int input;
	string line, temp;
	cin >> input;
	cin.get();
	for(int i=0; i < input; i++){
		temp = "";
		getline(cin,line);
		for(int j = 0; j < 10; j++){
			temp+= line[j];
		}
		if(temp == "Simon says"){
			for(int j = 11; j < line.size(); j++){
				cout << line[j];
			}
			cout << "\n";
		}
	}
}
