//Hydra heads
#include <bits/stdc++.h>
using namespace std;

int main(){
	long head, tail, count;
	priority_queue<long> pq;
	//Taking in the input for the head and the tail
	while(cin >> head >> tail){
		count = 0;
		//Checking the base condition
		if(head == 0 && tail == 0){
			return 0;
		}
		
		//Process the head and the tail
		if(tail % 2 == 1){
			head += (tail+1)/2;
			count += (tail+1)/2 + 1 ;
		}else{
			head += (tail/2);
			count += tail/2;
		}
		if(head % 2 == 1){
			cout << -1 << endl;
		}else{
			cout << count + head/2 << endl;
		}
	}
}
