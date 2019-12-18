//Bazen
#include <bits/stdc++.h>
using namespace std;

int main(){
	double x,y,area = 250*250*0.5;
	cin >> x >> y;
	cout << fixed << setprecision(2);
	if(x == 0 && y == 0){
		cout << 125.00 << " " << 125.00 << endl;
		return 0;
	}else if(x == 0 && y > 0){
		
	}else if(x > 0 && y == 0){
		
	}else if(x>125 && y < 125){
			
	}else if(x < 125 && y > 125){
			
	}else{
		cout << 0.00 << " " << 0.00 <<endl;
		return 0;
	}
}
