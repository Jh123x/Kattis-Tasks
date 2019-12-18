//Sok
#include<bits/stdc++.h>
using namespace std;

int main(){
	double orange,apple,pine,ro,ra,rp,unit = 1;
	cin >> orange >> apple >> pine >> ro >> ra >> rp;
	cout << fixed << setprecision(8);
	
	while(orange > 0 && apple > 0 && pine > 0 && unit > 0){
		if(unit > orange/ro){
			unit = orange/ro;
		}
		if(unit > apple/ra){
			unit = apple/ra;
		}
		if(unit > pine/rp){
			unit = pine/rp;
		}
		orange -= unit * ro;
		pine -= unit * rp;
		apple -= unit * ra;
	}
	cout << orange << " " << apple << " " << pine << endl;
	
}
