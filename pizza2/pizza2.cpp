//pizza2
#include <bits/stdc++.h>
using namespace std;

int main(){
	double crust, radius;
	cin >> radius >> crust;
	cout << fixed << setprecision(13);
	cout << (((radius-crust) * (radius-crust))/ (radius * radius)) *100 << endl;
}
