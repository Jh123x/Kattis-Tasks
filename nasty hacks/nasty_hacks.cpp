//nasty hacks
#include <iostream>
using namespace std;

int main(){
	int n;
	long int no_adv, adv, cost;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> no_adv >> adv >> cost;
		if(adv - no_adv > cost){
			cout << "advertise\n";
		}else if(adv - no_adv == cost){
			cout << "does not matter\n";
		}else if(adv - no_adv < cost){
			cout << "do not advertise\n";
		}
	}
}
