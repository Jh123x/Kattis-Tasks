//Ladder
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int result;
	double height, angle;
	cin >> height >> angle;
	result = height / sin(angle/180*M_PI)+1;
	cout << result;
}
