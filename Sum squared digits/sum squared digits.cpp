//Sum squared digits
#include <bits/stdc++.h>
using namespace std;


long long base_x(long long x,long long base){
	long long sum, count = 0, num;
	while(x > pow(base,count)){
		count ++;
	}
	sum = 0;
	while(x > 0 && count >= 0){
//		cout << x << " " << count << " " << sum << endl;
		num = 0;
		while(x >= pow(base,count)){
			x -= pow(base,count);
			num ++;
		}
		count--;
		sum += pow(num,2);
	}
	return sum;
}

int main(){
	long long n, b, k, inputs, i,sum = 0, temp;
	cin >> inputs;
	for(i = 0; i < inputs; i++){
		cin >> k >> b >> n;
		temp = base_x(n,b);
		cout << k << " " << temp << endl;
	}	
}
