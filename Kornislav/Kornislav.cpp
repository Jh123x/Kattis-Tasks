//kornislav
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	vector<int> rect(4);
	
	//Taking in all the directions
	for(int i = 0; i < 4; ++i){
		cin >> rect[i];
	}
	
	//Sort the edges
	sort(rect.begin(),rect.end());
	
	//Always take the first and the third edge
	cout << rect[0] * rect[2];
}
