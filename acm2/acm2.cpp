//acm2
#include<bits/stdc++.h>
using namespace std;

int main(){
	long input, start, i, temp, total_t = 300, ac = 0, first, m, count = 0;
	cin >> input >> start;
	vector<long> v;
	vector<long> solved;
	
	for(i = 0; i < input; i++){
		cin >> temp;
		if(i== start){
			first = temp;
		}else{
			v.push_back(temp);	
		}
	}
	if(first > 300){
		cout << "0 0\n";
		return 0;
	}
	m = 0;
	sort(v.begin(),v.end(),greater<long>());
	v.push_back(first);
	while(total_t - v[v.size() - count-1] >= 0){
		ac += 1;
		total_t -= v[v.size() - count-1];
		m += 300 - total_t;
		count++;
	}
	
	cout << ac << " " << m << "\n";
	return 0;
}
