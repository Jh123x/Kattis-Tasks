//cups
#include <bits/stdc++.h>
using namespace std;

int main(){
	int inputs,rad;
	cin >> inputs;
	pair<string,int> cups;
	vector<pair<string,int>> v;
	string temp1,temp2;
	for(int i =0; i < inputs; i ++){
		cin >> temp1 >> temp2;
		rad = 0;
		if(isdigit(temp1[0])){
			for(int j = 0; j < temp1.length(); j++){
				rad = rad*10 + temp1[j] - '0';
			}
			rad = rad/2;
			cups = pair<string,int>(temp2,rad);
		}else{
			for(int j = 0; j < temp2.length(); j++){
				rad = rad*10 + temp2[j] - '0';
			}
			cups = pair<string,int>(temp1,rad);
		}
		v.push_back(cups);
	}
	sort(v.begin(),v.end(), [](pair<string,int> a, pair<string,int> b){
		return a.second <= b.second;
	});
	for(pair<string,int> a:v){
		cout << a.first << "\n";
	}	
}
