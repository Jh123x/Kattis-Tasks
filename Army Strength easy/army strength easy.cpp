//Army strength easy
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	int gz, mgz, power, gza, mgza;
	unsigned short int tc;
	
	//Take in the number of test cases;
	cin >> tc;
	
	//Take in the number of testcase
	while(tc--){
		
		//Take in the number of monsters in each of the armies
		cin >> gz >> mgz;
		
		//Initialising the pq
		gza = 0, mgza = 0;
		
		//Taking in the monsters in gz army
		for(int i = 0; i < gz; ++i){
			cin >> power;
			if(power > gza){
				gza = power;
			}
		}
		
		//Taking in the monsters in mgz army
		for(int i = 0; i < mgz; ++i){
			cin >> power;
			if(power > mgza){
				mgza = power;
			}
		}
		
		
		if(gza < mgza){
			cout << "MechaGodzilla\n";
		}else{
			cout << "Godzilla\n";
		}
		
	}
}
