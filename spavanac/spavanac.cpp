#include <iostream>

using namespace std;

int main(){
	int hours, minutes;
	cin >> hours >> minutes;
	if(minutes >= 45){
		minutes -= 45;
	}else{
		minutes = (minutes+60 - 45);
		if(hours >= 1){
			hours -= 1;
		}else{
			hours = 23;
		}
	}	
	cout << hours << " " << minutes;
}
