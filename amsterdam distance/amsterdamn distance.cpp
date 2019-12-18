//amsterdam distance
#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846
using namespace std;

long double min(long double x, long double y){
	return x > y ? y : x;
}

long double get_dist(long double x1, long double y1, long double x2, long double y2, long double m, long double n, long double r){
	long double radius = r * min(y1,y2)/n;
	return min(abs(x1-x2) / m * radius * M_PI + abs(y1-y2) / n * r, r*y1/n + r*y2/n);
}

int main(){
	long double m, n, x1, y1, x2, y2, r;
	cin >> m >> n >> r >> x1 >> y1 >> x2 >> y2;
	
	cout << fixed << setprecision(14);
	cout << get_dist(x1,y1,x2,y2,m,n,r);
}

