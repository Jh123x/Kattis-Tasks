//Ptice
#include <bits/stdc++.h>
using namespace std;

long max(long s1, long s2, long s3){
	if(s1 >= s2 && s1 >= s3){
		return s1;
	}else if(s2 >= s1 && s2 >= s3){
		return s2;
	}else{
		return s3;
	}
}

int main(){
	long input, b_score = 0, a_score = 0, g_score = 0;
	string b_ans = "BABC", a_ans = "ABC", g_ans = "CCAABB", ans;
	cin >> input >> ans;
	for(long i = 0; i < input; i++){
		if(ans[i] == b_ans[i%b_ans.size()]){
			b_score += 1;
		}
		if(ans[i] == a_ans[i%a_ans.size()]){
			a_score += 1;
		}
		if(ans[i] == g_ans[i%g_ans.size()]){
			g_score += 1;
		}
	}
	input = max(b_score, a_score, g_score);
	cout << input << endl;
	if(input == a_score){
		cout << "Adrian" << endl;
	}
	if(input == b_score){
		cout << "Bruno" << endl;
	}
	
	if(input == g_score){
		cout << "Goran" << endl;
	}
	
	
}
