//qaly
#include <iostream>

using namespace std;

int main(){
	int periods;
	double total, q, y;
	cin >> periods;
	for(int i = 0; i < periods; i++){
		cin >> q >> y;
		total += q*y;
	}
	cout << total;
}
