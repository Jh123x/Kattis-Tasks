//different distances
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Initialise vars
	double x1,x2,y1,y2,p;
	
	
	while(cin >> x1 >> y1 >> x2 >> y2 >> p){
		cout << fixed << setprecision(10);
		cout << pow(pow(abs(x1-x2),p) + pow(abs(y1-y2),p),1/p) << "\n";
	}
}
