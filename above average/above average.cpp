//above average
#include <bits/stdc++.h>
using namespace std;

int get_percentage(vector<double> v){
	int total = 0, count = 0;
	for(double i : v){
		total += i;
	}
	double average = (double)total/(double)v.size();
	for(int i = 0; i < v.size(); i++){
		if(v[i] > average){
			count ++;
		}
	}
	return count;
}


int main(){
	int input, cases, temp;
	cin >> input;
	cout << fixed << setprecision(3);
	vector<double> v;
	for(int i = 0; i < input; i++){
		cin >> cases;
		v.clear();
		for(int j = 0; j < cases; j++){
			cin >> temp;
			v.push_back(temp);
		}
		temp = get_percentage(v);
		cout << (double)temp / (double) v.size() * 100 << "%\n";
	}
	
}
