//isithalloween
#include <iostream>
using namespace std;

int main(){
	string month;
	int day;
	cin >> month >> day;
	if(month == "OCT" && day == 31){
		cout << "yup";
	}else if(month == "DEC" && day == 25){
		cout << "yup";
	}else{
		cout << "nope";
	}
}
