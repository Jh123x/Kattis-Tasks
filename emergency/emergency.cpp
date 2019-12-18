//emergency
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring all of the variables
	unsigned long long int n, k;
	
	//Take in the values of n and k
	cin >> n >> k;
	
	//Count the number of steps he has to take in order to reach his home
	cout << min(n - 1, k + 1 + ((n-1) % k)) << "\n";
	
}
