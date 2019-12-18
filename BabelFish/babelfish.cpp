//babelfish
#include <iostream>
#include <unordered_map>
#include <sstream>
using namespace std;

int main(){
	unordered_map<string,string> mp;
	string w1, w2;
	while(getline(cin, w1)){
		stringstream ss(w1);
		if(ss.gcount() == 0){
			break;
		}
		w1 = ss.get();
		w2 = ss.get();
		mp[w2] = w1;
	}
	while(cin >> w1){
		if(mp.find(w1) == mp.end()){
			cout<<"eh\n";
		}else{
			cout << mp[w1] << "\n";
		}
	}
	
}
