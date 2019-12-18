//speedlimit
#include<bits/stdc++.h>
using namespace std;

int main(){
	int input, total, spd,time,prev;
	while(cin >> input){
		if(input == -1){
			return 0;
		}
		total = 0;
		prev = 0;
		for(int i = 0; i < input; i++){
			cin >> spd >> time;
			total += spd *(time-prev);
			prev = time;
		}
		cout << total << " miles\n";
	}
}
