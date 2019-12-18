//basketballoneonone
#include <bits/stdc++.h>
using namespace std;

int cti(char &i){
	return (int) i - '0';
}

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	char person, pts;
	int a = 0, b = 0;
	
	//Run the loop to see if it ended
	while(true){
		
		//Take in the person who scored the point
		cin >> person >> pts;
		
		//Filter out the person who won
		if(person == 'A'){
			a += cti(pts);
		}else if (person == 'B'){
			b += cti(pts);
		}
		
		//Check if the end condition is met
		if(b >= 11 || a >= 11){
			if(abs(a-b) < 2){
				continue;
			}else{
				break;
			}
		}
	}
//	cout << a << " " << b << "\n";	
	cout << (a > b ? 'A' : 'B');
}
