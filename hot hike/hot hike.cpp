//Hot hikes
#include<bits/stdc++.h>
using namespace std;

int max(int i1, int i2){
	if(i1 > i2){
		return i1;
	}else{
		return i2;
	}
}

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int inputs, i, temp, min = 1000, day = -1;
	vector<int> v;
	
	cin >> inputs;
	
	//Taking in the temperatures for the days
	for(i = 0; i < inputs; ++i){
		cin >> temp;
		v.push_back(temp);
	}
	
	//Check which pair of days have the least temp
	for(i = 0; i < inputs-2; i++){
		temp = max(v[i], v[i+2]);
		if(temp < min){
			min = temp;
			day = i+1;
		}
	}
	
	cout<< day << " " <<min << "\n";
	
}
