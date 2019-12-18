//dasblinkenlights
#include <bits/stdc++.h>
using namespace std;

int main(){
	int time, t1, t2, temp;
	cin >> t1 >> t2 >> time;
	temp = t1 > t2 ? t1 : t2;
	
	while(temp % t1 != 0 || temp % t2 != 0){
		temp++;
	}
	if(temp > time){
		cout << "no\n";
	}else{
		cout << "yes\n";
	}
	
}
