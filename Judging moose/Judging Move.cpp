//Judging moose

#include<bits/stdc++.h>
using namespace std;

int main(){
	int l,r;
	scanf("%d %d",&l,&r);
	if(l + r == 0){
		cout << "Not a moose";
		return 0;
	}
	if(l == r){
		cout << "Even ";
	}else{
		cout <<"Odd ";
	}
	if(l > r){
		cout << 2* l;
	}else{
		cout << 2* r;
	}
}
