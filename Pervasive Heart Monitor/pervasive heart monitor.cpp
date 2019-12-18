//Pervasive Heart Monitor
#include <bits/stdc++.h>
using namespace std;

double to_int(string str){
	double result = 0, count = 0;
	bool flag = false;
	for(int i = 0; i < str.size(); ++i){
		if(str[i] == '.'){
			flag = true;
			continue;
		}
		if(flag){
			++count;
		}
		result = result * 10 + str[i] - '0';
	}
	result = result/pow(10,count);
	return result;
}

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	double count, total;
	string name, line, word;
	stringstream ss;
	
	cout << fixed << setprecision(6);
	
	while(getline(cin,line)){
		name = "";
		count = 0;
		total = 0;
		ss.clear();
		ss << line;
		while(ss >> word){
			if(word[0] >= '0' && word[0] <= '9'){
				total += to_int(word);
				++count;
			}else{
				name += word + " ";
			}
		}
		cout << total/count << " " << name << "\n";
	}
}
