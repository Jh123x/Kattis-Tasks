//Cold-puter
#include<bits/stdc++.h>
using namespace std;

int main(){
	int inp,val,count = 0;
	cin >> inp;
	for(int i = 0; i<inp;i++){
		cin >> val;
		if(val < 0)
			count ++;
	}
	cout << count;
}
