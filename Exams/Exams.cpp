//Exam 
#include <bits/stdc++.h>
using namespace std;

int main(){
	long c_score, diff = 0, same = 0, i;
	string t1,t2;
	
	//Taking in the three different valies
	cin >> c_score >> t1 >> t2;
	
	//Loop through the strings to find similarities and differences
	for(long i = 0; i < t1.size(); i++){
		if(t1[i] != t2[i]){
			diff += 1;
		}else{
			same += 1;
		}
	}
	//Initialise new variables
	long max_c = 0;
	
	//Max score if the options chosen are the same
	if(c_score >= same){
		max_c += same;
	}else{
		max_c += c_score;
	}
	
	//Score for the difference
	if(diff > t1.size() - c_score){
		max_c += t1.size() - c_score;
	}else{
		max_c += diff;
	}
	

	cout << max_c << endl;	
}
