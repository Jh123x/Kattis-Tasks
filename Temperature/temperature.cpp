//temperature
#include <bits/stdc++.h>
using namespace std;

int main(){
	double x,y,ratio;
	cin >> x >> y;
	if(x > 0 && y == 0){
		cout << "IMPOSSIBLE\n";
		return 0;
	}else if(x == 0){
		cout << "ALL GOOD\n";
	}
	
	ratio = x/y;
}
