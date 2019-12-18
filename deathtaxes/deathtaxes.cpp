//Death and taxes
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	double shares = 0, ave = 0, x, p, nshares, revenue, profit;
	string command;
	
	//Take in all of the commands
	while(cin >> command){
		
		if(command == "buy"){
			cin >> x >> p;
			ave = (ave * shares + x * p) / (x+shares);
			shares += x;
		}else if(command == "split"){
			cin >> x;
			shares *= x;
			ave /= x;
		}else if(command == "sell"){
			cin >> x >> p;
			shares -= x;
 		}else if(command == "merge"){
 			cin >> x;
 			nshares = 0;
 			while(shares >= x){
 				shares -= x;
 				++nshares;
			}
			ave *= x;
			shares = nshares;
		}else if(command == "die"){
			cin >> p;
			profit = p - ave;
			if(profit > 0){
				revenue = shares * (p - profit * 0.3);	
			}else{
				revenue = shares * (p);
			}
			
			break;
		}else{
			assert(false);
		}
//		cout << ave << "\n";
	}
	
	cout << fixed << setprecision(3) << revenue;
	
	
}
