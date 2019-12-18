//babybites
#include <bits/stdc++.h>
using namespace std;

int ctos(string number){
	int result = 0;
	for(int i = 0; i < number.size(); i++){
		result = result*10 + number[i]-'0';
	}
	return result;
}

int main(){
	int input, i;
	string temp;
	cin >> input;
	for(i = 1; i <= input; i++){
		cin >> temp;
		if(temp == "mumble"){
			continue;
		}else if(ctos(temp) == i){
			continue;
		}
		else{
			cout << "something is fishy\n";
			return 0;
		}
	}
	cout << "makes sense\n";
}
