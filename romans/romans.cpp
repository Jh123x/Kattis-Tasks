//Romans

#include <iostream>
using namespace std;
int main(){
	double input;
	int result;
	cin >> input;
	result = input*5280/4854*1000+0.5;
	cout << result;
}
