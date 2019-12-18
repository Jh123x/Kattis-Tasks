//grass seed
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int inputs;
	double cost, length, breath, total = 0;
	cin >> cost >> inputs;
	for(int i = 0; i < inputs; i++){
		cin >> breath >> length;
		total += breath *length *cost;
	}
	cout << std::setprecision(7) << fixed;
	cout << total;
}
