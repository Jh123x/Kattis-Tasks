//nodup
#include <bits/stdc++.h>
using namespace std;

int main(){
	string temp;
	vector<string> v;
	while(cin >> temp){
		if(find(v.begin(),v.end(),temp) == v.end()){
			v.push_back(temp);
		}else{
			cout << "no\n";
			return 0;
		}
	}
	cout << "yes";
	return 0;
}
