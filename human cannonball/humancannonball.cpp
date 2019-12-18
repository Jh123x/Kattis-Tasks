//human cannon ball 2
#include <bits/stdc++.h>
# define M_PI 3.141592653589793238462643383279502884
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int cases;
	double angle, dist, h1, h2, ispd, time, y;
	cin >> cases;
	
	//Loop for each of the test cases
	while(cases--){
		
		//Take in the input for the test cases
		cin >> ispd >> angle >> dist >> h1 >> h2;
		
		//Convert the angle to RAD
		angle = angle/180 * M_PI;
		
		time = dist / (ispd * cos(angle));
		y = ispd * time * sin(angle) - 0.5 * 9.81 * time * time;
//		cout << y;
		if(y >= h1+1 && y <= h2-1){
			cout << "Safe\n";
		}else{
			cout << "Not Safe\n";
		}
		
	}
}
