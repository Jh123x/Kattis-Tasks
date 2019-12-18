//ACM Scoring
#include <bits/stdc++.h>
using namespace std;

int main(){
	int time,total = 0, solved = 0;
	char problem;
	string status;
	map<char,int> mp;
	vector<char> v;
	while(cin >> time){
		if(time == -1){
			cout << solved << " " << total << endl;
			break;
		}
		cin >> problem >> status;
		if(status == "wrong"){
			if(find(v.begin(),v.end(),problem) == v.end()){
				mp[problem] = 0;
				v.push_back(problem);
			}
			mp[problem] += 20;
		}else if(status == "right"){
			if(find(v.begin(),v.end(),problem) != v.end()){
				total += mp[problem];
			}
			total += time;
			solved += 1;
		}
	}
}
