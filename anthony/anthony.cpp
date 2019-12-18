//Anthony and Cora
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(10);
	
	//Declaring the variables
	int a, c, x, pos;
	double r;
	
	//Take in the number of points they have
	cin >> a >> c;
	x = a+c-1;
	
	vector<double> p(x);
	
	//Taking in all of the probabilities
	for(int i = 0; i < x; ++i){
		cin >> p[i];
	}
	
	//Check if any of their scores is 0
	if(a == 0){
		cout << 0;
		return 0;
	}else if(c == 0){
		cout << 1;
		return 0;
	}
	
	//Making the 2d vector for dp
	vector<vector<double>> dp(a+1,vector<double>(c+1,0.0));
	
	//Probability of starting value is 1
	dp[a][c] = 1;
	
	//Start DP
	for(int i = a; i > 0; --i){
		for(int j = c; j > 0; --j){
			
			pos = x-i-j+1;
			//Compute the possibility backwards
			dp[i-1][j] += (p[pos]) * dp[i][j];
			dp[i][j-1] += (1 - p[pos]) * dp[i][j];
		}
	}
	
	//Sum total possibility of winning
	r = 0;
	for(int i = 0; i <= a; ++i){
		r += dp[i][0];
	}
	if(r < 1){
		cout << r;	
	}else{
		cout << 1;
	}
	
	
}
