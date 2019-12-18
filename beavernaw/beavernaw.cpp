//beavernaw
#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846264338327950288
using namespace std;

int main(){
	double D, V, ans;
	while(cin >> D >> V){
		if(D == 0 && V == 0){
			return 0;
		}
		ans = pow(D,3) - 6*V/M_PI;
		ans = pow(ans,1.0/3.0);
		cout << fixed << setprecision(13);
		cout << ans << endl;
		
	}
}
