//FizzBuzz
#include <iostream>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	int x,y,z;
	
	
	cin >> x >> y >> z;
	for(int i = 1; i <= z; i++){
		if(i % x == 0){
			cout << "Fizz";
		}
		if(i % y == 0){
			cout << "Buzz";
		}
		if(i % y > 0 && i % x > 0){
			cout << i;
		}
		cout << "\n";
	}
}
