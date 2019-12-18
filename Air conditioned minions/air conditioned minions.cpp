//Air conditioned minions
#include <bits/stdc++.h>
using namespace std;

int main(){
	int minions, start, end;
	vector<vector<int>> data;
	vector<int> temp;
	cin >> minions;
	for(int i = 0; i < minions; i++){
		cin >> start >> end;
		temp.clear();
		temp = {start,end};
		data.push_back(temp);
	}
	sort(data.begin(),data.end(),[](vector<int> x1,vector<int> x2){
		return x1[0] < x2[0];
	});
	for(int i = 0; i < data.size(); i++){
		cout << data[i][0] << " " << data[i][1]<< "\n"; 
	}
}
