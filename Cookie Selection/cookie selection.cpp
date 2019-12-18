//Cookie Selection
#include <bits/stdc++.h>
using namespace std;

void balance(priority_queue<long, vector<long>, less<long>> &front, priority_queue<long, vector<long>, greater<long>> &back, long &size){
	if(front.size() > back.size()){
		back.push(front.top());
		front.pop();
	}else if(size % 2 == 0 && back.size() > front.size()){
		front.push(back.top());
		back.pop();
	}else if(size % 2 == 1 && back.size()-1 > front.size()){
		front.push(back.top());
		back.pop();
	}
}

int main(){
	cin.tie(0);
	cout.tie(0);
	string temp;
	long t, size = 0;
	priority_queue<long, vector<long>, less<long>> front;
	priority_queue<long, vector<long>, greater<long>> back;
	while(cin >> temp){
		if(temp == "#"){
			//If the input is not a number
			cout << back.top() << endl;
			back.pop();
			--size;
			balance(front,back,size);
		}else{
			//If the input is a number
			t = 0;
			for(long i = 0; i < temp.size(); i++){
				t = t*10 + temp[i]-'0';
			}
			if(size == 0 || t > back.top()){
				back.push(t);
			}else{
				front.push(t);
			}
			++size;
			balance(front,back,size);
		}
	}
}
