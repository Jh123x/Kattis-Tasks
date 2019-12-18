//apaxiaaans
#include<bits/stdc++.h>
using namespace std;

int main(){
	string result, inp;
	cin >> inp;
	char prev;
	for(int i =0; i<inp.size(); i++){
		if(prev != inp[i]){
			prev = inp[i];
			result += inp[i];
		}
	}
	cout << result;
		
}
