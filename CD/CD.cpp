//CD
#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned long ja,ji,i,temp,count,s1;
	unordered_set<long> jack;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(cin >> ja >> ji){
		count=0;
		jack.clear();
		if(ja + ji <= 0){
			return 0;
		}
		for(i = 0; i < ja; ++i){
			cin >> temp;
			jack.insert(temp);
		}
		for(i = 0; i < ji; ++i){
			cin >> temp;
			s1 = jack.size();
			jack.insert(temp);
			if(s1 == jack.size()){
				count++;
			}
		}
		
		cout << count << "\n";
	}
	
}
