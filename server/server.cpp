//Server
#include <bits/stdc++.h>
using namespace std;

int main(){
	int time,tasks,temp,completed = 0;
	cin >> tasks >> time;
	for(int i = 0; i < tasks; i++){
		cin >> temp;
		if(time < temp){
			cout << completed << endl;
			return 0;
		}else{
			time -= temp;
			++completed;
		}
	}
	cout << completed << endl;
}
