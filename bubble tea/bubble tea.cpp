//bubble tea
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring all the variables
	long a_tea, a_top, temp, min, i, j, temp2, t_cost;
	
	//Taking in the kinds of tea
	cin >> a_tea;
	
	//Creates a vector for storing the total price of the tea
	vector<long> v(a_tea);
	
	//Setting the tea price into the vector
	for(i = 0; i < a_tea; ++i){
		cin >> temp;
		v[i] = temp;
	}
	
	//Getting the number of toppings in the store
	cin >> a_top;
	
	//Create a vector to store the price of toppings
	vector<long> tps(a_top+1);
	
	//Store the prices of the topping
	for(i = 1; i < a_top+1; ++i){
		cin >> temp;
		tps[i] = temp;
	}
	
	//Finding the minimum cost of the drinks
	for(i= 0; i < a_tea; ++i){
		cin >> temp;
		min = INT_MAX;
		for(j = 0; j < temp; ++j){
			cin >> temp2;
			if(min > tps[temp2]){
				min = tps[temp2];
			}
		}
		v[i] += min;
	}
	
	//Finding the cheapest tea
	min = INT_MAX;
	for(i = 0; i < a_tea; ++i){
		if(v[i] < min){
			min = v[i];
		}
	}
	
	//Get the total amount of money
	cin >> temp;
//	cout << "Money: " << temp << " Min price: " << min << endl;
	if(temp/min - 1 >= 1){
		cout << temp/min - 1 << "\n";	
	}else{
		cout << 0 << "\n";
	}
	
	
	
}
