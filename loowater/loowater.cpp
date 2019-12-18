//Loowater
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Making the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Initialising the variables
	int head, knight, temp, gold, i;
	set<int> knights;
	bool flag;
	unordered_map<int,int> mp;
	vector<int> heads;
	
	while(cin >> head >> knight){
		
		//Quick checks to see if dragon can be slain
		if(head == 0 && knight == 0){
			break;
		}else if(head > knight){
			flag = true;
		}
		
		//Resetting the data structures
		knights.clear();
		heads.clear();
		mp.clear();
		flag = false;
		gold = 0;
		
		//Taking in the input for the head
		for(i = 0; i < head; i++){
			cin >> temp;
			heads.push_back(temp);
		}
		
		//Taking in the inputs for the knights
		for(i = 0; i < knight; i++){
			cin >> temp;
			knights.insert(temp);
			mp[temp] += 1;
		}
		
		if(flag){
			cout << "Loowater is doomed!\n";
			continue;
		}
		
		//Checking if there is a head for every knight
		for(auto j : heads){
			auto it = knights.lower_bound(j);
//			cout << "Head size: " << j << " Found: " << *it << "\n";
			if(it == knights.end() || *it < j){
				flag = true;
				break;
			}else{
//				cout << "Chosen: " << *it << "\n";
//				cout << "Size: " << knights.size() << "\n";
				gold += *it;
				if(mp[*it] > 1){
					mp[*it] -= 1;
				}else{
					mp.erase(*it);
					knights.erase(*it);
				}
			}
		}
		
		//If the loop break because there is no knight to slay the dragon then it is doom otherwise the dragon can be slain
		if(flag){
			cout << "Loowater is doomed!\n";
		}else{
			cout << gold << "\n";
		}
	}
}
