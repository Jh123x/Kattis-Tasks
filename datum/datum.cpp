//Datum
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<string> days = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	vector<int> months = {0,31,28,31,30,31,30,31,31,30,31,30};
	int day, month, sum = 0;
	cin >> day >> month;
	for(int i = 0; i < month;i++){
		sum += months[i];
	}
	sum += day;
	cout << days[(sum+2)%7];
	
}
