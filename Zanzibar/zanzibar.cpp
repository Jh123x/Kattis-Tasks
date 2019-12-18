//zanzibar
#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned int inputs,i,prev,next,total;
	string line;
	stringstream x;
	cin >> inputs;
	cin.get();
	for(i = 0; i < inputs; i++){
		x.str("");
		x.clear();
		total = 0;
		getline(cin,line);
		x << line;
		x >> prev;
		while (x >> next){
			if(prev*2 < next){
				total += next - prev*2;
			}
			prev = next;
		}
		cout << total << endl;
	}
	
}
