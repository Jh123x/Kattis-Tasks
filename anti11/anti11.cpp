//anti11
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int inputs, length, i, j, n1, n2,temp;
	cin >> inputs;
	for(i = 0; i < inputs; i++){
		n1=2, n2=3;
		cin >> length;
		if(length <= 2){
			cout << length+1 << "\n";
			continue;
		}
		for(j = 0; j < length-1; j++){
			temp = n1+n2;
			n1 = n2 % ((long long int) pow(10,9) + 7);
			n2 = temp % ((long long int) pow(10,9) + 7);
		}
		cout << n1 % ((long long int) pow(10,9) + 7) << "\n";
	}
	
}
