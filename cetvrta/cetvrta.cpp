//Cetvrta
#include <iostream>
using namespace std;

int main(){
	int x1,x2,x3,y1,y2,y3,xr,yr;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if(x1 == x2){
		xr = x3;
	}else if(x2 == x3){
		xr = x1;
	}else{
		xr = x2;
	}
	
	if(y1 == y2){
		yr = y3;
	}else if(y2 == y3){
		yr = y1;
	}else{
		yr = y2;
	}
	
	cout << xr << " " << yr;
	
}
