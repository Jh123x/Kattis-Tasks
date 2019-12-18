//Artichokes
#include <bits/stdc++.h>
using namespace std;

double price(double &k, double &a, double &b, double &c, double &d, double &p){
	return p*(sin(a*k+b)+cos(c*k+d)+2);
}


int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	double p, a, b, c, d, n, max, me;
	
	//Take in the values;
	cin >> p >> a >> b >> c >> d >> n;
	
	//Create the vector
	vector<double> prices(n);
	
	//Fill up the vector
	for(double i = 1; i <= n; ++i){
		prices[i-1] = price(i,a,b,c,d,p);
	}
	
	//Find the max decrease
	me = prices[0];
	max = 0;
	
	for(int i = 1; i < n; ++i){
		if(me - prices[i] > max){
			max = me - prices[i];
		}
		
		if(prices[i] > me){
			me = prices[i];
		}
	}
	
	cout << fixed << setprecision(10) << max;
	
	
}
