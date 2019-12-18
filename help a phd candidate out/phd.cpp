//Help a phd candidate out
#include <bits/stdc++.h>
using namespace std;

int main(){
	int inputs,a,b,count;
	string temp;
	char op;
	cin >> inputs;
	cin.get();
	for(int i = 0; i < inputs; i++){
		count = 0,a = 0, b = 0;
		getline(cin,temp);
		while(isdigit(temp[count])){
			a = a*10 + temp[count] - '0';
			count++;
		}
		if(a == 0 && count == 0){
			cout << "skipped\n";
		}else{
			op = temp[count];
			count ++;
			while(isdigit(temp[count])){
				b = b*10 + temp[count] - '0';
				count++;
			}
			cout << a + b << "\n";
		}
	}
}
