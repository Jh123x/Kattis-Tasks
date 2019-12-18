//Backspace
#include <bits/stdc++.h>
using namespace std;

int main(){
	string x = "";
	char i;
	while(true){
		i = getchar();
		if(i == '\n'){
			break;
		}
		if(i == '<'){
			x.pop_back();
		}else{
			x += i;
		}
	}
	cout << x << endl;
}
