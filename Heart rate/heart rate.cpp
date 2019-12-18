//heart rate
#include <iostream>
using namespace std;

int main(){
	int input;
	double beat, seconds;
	cin >> input;
	for(int i = 0; i < input; i ++){
		cin >> beat >> seconds;
		cout << (beat-1)*60.0 / seconds << " " << beat*60.0 / seconds << " " << (beat+1)*60.0 /seconds << "\n";
	}
}
