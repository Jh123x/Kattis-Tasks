//one chicken
#include <bits/stdc++.h>
using namespace std;

int main(){
	long people,chicken;
	cin >> people >> chicken;
	if(chicken > people){
		if(chicken-people == 1){
			cout << "Dr. Chaz will have 1 piece of chicken left over!\n";
		}else{
			cout << "Dr. Chaz will have "<< chicken-people <<" pieces of chicken left over!\n";
		}
	}else{
		if(people-chicken == 1){
			cout << "Dr. Chaz needs 1 more piece of chicken!\n";
		}else{
			cout << "Dr. Chaz needs "<< people-chicken <<" more pieces of chicken!\n";
		}
	}
}
