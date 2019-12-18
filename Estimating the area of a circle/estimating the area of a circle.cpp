//estimating the area of a circle
#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846
using namespace std;

int main(){
	double radius, m, n, t_area, est;
	while(true){
		cin >> radius >> m >> n;
		if(radius == 0 && m == 0 && n ==0){
			return 0;
		}
		est = 4 * radius * radius * n / m;
		t_area = radius * radius * M_PI;
		cout << t_area << " " << est << "\n";
	}
}
