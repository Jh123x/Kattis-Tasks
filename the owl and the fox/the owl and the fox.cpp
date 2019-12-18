//The owl and the fox
#include <bits/stdc++.h>
using namespace std;

int digit_sum(int var){
	int result = 0;
	while(var > 0){
		result += var%10;
		var/=10;
	}
	return result;
}

int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	int cases, i, num, sum;
	cin >> cases;
	for(i = 0; i < cases; i++){
		cin >> num;
		sum = digit_sum(num);
		cout << "Sum: " << sum << endl;
		if(sum-1 == 0){
			cout << 0 << "\n";
			continue;
		}
		while(num > 0){
			--num;
			if(digit_sum(num) == sum - 1){
				cout << num << "\n";
				break;
			}
			
		}
	}
	
}
