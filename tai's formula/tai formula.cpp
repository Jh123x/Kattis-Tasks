//tais formula
#include <bits/stdc++.h>
using namespace std;

int main(){
	long input,i;
	long double x1,y1,x2,y2, total = 0;
	cin >> input;
	cin >> x1 >> y1;
	for(i = 0; i < input-1; i++){
		cin >> x2 >> y2;
		total += (y2+y1)/2 * (x2-x1);
		x1 = x2;
		y1 = y2;
	}
	cout << fixed << setprecision(5);
	cout << total/1000;
}
