//baconeggsandspam
#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
	int people, i;
	string temp, name;
	stringstream ss;
	unordered_map<string,set<string>> mp;
	set<string> foods;
	while(cin >> people){
	  if(people == 0){
	    break;
	  }
	    foods.clear();
	    mp.clear();
	    ss.clear();
	    
	    for(i = 0; i < people; i++){
	        cin >> name;
	        getline(cin,temp);
	        ss << temp;
	        while(ss >> temp){
	            mp[temp].insert(name);
	            foods.insert(temp);
	        }
	        ss.clear();
	    }
	    
	    for(auto j: foods){
	        cout << j << " ";
	        for(auto k: mp[j]){
	            cout << k << " ";
	        }
	        cout << "\n";
	    }
	    cout << "\n";
	}
	
}
