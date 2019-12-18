// parking
#include <bits/stdc++.h>
using namespace std;
int main(){
	int total = 0 , a, b, c, no_truck = 0;
	int start,end;
	vector<int> v(100);
	cin >> a >> b >> c;
	int price[] = {0,a,b,c};
	while(cin >> start >> end){
		for(int i = start; i < end; i++){
			v[i] += 1;
		}
	}
	
	for(int i = 0; i < v.size(); i++){
		total += price[v[i]] * v[i];
	}
	cout << total;
}
