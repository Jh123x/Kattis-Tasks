//brexit
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make code run faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Intialise the variables
	int countries, partnerships, home, l_c, c1, c2,i, temp;
	
	//Receive the input variables
	cin >> countries >> partnerships >> home >> l_c;
	
	//Starting vector
	vector<vector<int>> rs(countries+1, vector<int>(countries+1));
	
	//Taking in all the relationships;
	for(i = 0; i < partnerships; ++i){
		cin << c1 << c2;
		rs[c1][c2] = 1;
		rs[c2][c1] = 1;
	}
	
	for(i = 0; i < rs[l_c].size(); ++i){
		temp = rs[l_c][i];
		if(temp == 1){
			rs[l_c][i] = -1;
			rs[i][l_c] = -1;
		}
	}
	
	
	
	
}
