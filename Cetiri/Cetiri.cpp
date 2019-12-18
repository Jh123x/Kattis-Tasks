//Cetiri
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n1,n2,n3,diff,temp;
	cin >> n1 >> n2 >> n3;
	vector<int> v(3);
	v[0] = n1;
	v[1] = n2; 
	v[2] = n3;
	
	sort(v.begin(),v.end());
	
	if(v[1] - v[0] > v[2] - v[1]){
		cout << (v[0]+v[1])/2 << endl;
	}else if(v[2] - v[1] > v[1] - v[0]){
		cout << (v[2]+v[1])/2 << endl;
	}else{
		diff = v[1] - v[0];
		if(v[2] + diff < 100){
			cout << v[2] + diff << endl;
		}
		else{
			cout << v[0] - diff << endl;
		}
	}
	
	
}
