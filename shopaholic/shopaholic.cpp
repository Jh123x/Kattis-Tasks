//shopaholic
#include <bits/stdc++.h>
using namespace std;

int main(){
	long input, i, temp, total = 0;
	cin >> input;
	vector<long> prices;
	for(i = 0; i < input; i++){
		cin >> temp;
		prices.push_back(temp);
	}
	sort(prices.begin(), prices.end(), greater<long>());
	
	for(i = 2; i < prices.size(); i){
		total += prices[i];
		i+=3;
	}
	cout << total << "\n";
}
