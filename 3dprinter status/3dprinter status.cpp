//3d printer status
#include <iostream>
#include <math.h>
#include <map>
using namespace std;

map<int,int> mp;


int get_days(int printers, int statues_r, int days){
	if(printers >= statues_r){
		return 1;
	}else if(mp.find(statues_r) != mp.end()){
		return mp[statues_r];
	}
	else{
		int result1 = 1 + get_days(printers, statues_r - printers, days + 1);
		int result2 = 1 + get_days(printers * 2, statues_r, days+1);
		result2 = result1> result2 ? result2 : result1;
		mp[statues_r] = result2;
		return result2;
	}
}

int main(){
	int s_needed, days;
	cin >> s_needed;
	cout << get_days(1,s_needed,0);
	
}
