//difference

#include <iostream>
using namespace std;
int main(){
	long long first,second, result;
	while(cin >> first >> second){
		result = first-second;
		if(result < 0){
			cout << -result;
		}else{
			cout << result;
		}
		cout << "\n";
	}
	
}
