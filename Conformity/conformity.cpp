//conformity
#include <bits/stdc++.h>
using namespace std;

string hash_list(vector<int> &v){
	string result = "";
	int temp, i;
	for(i = 0; i < v.size(); ++i){
		temp = v[i];
		while(temp > 0){
			result += (char)(temp%10 + '0');
			temp /= 10;
		}
	}
	return result;
}

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declare the variables
	int input, i, temp, j, count,max;
	unordered_map<string,int> mp;
	vector<int> t2;
	
	//Taking in the number of input;
	cin >> input;
	
	//Take in the course the person is taking
	for(i = 0; i < input; ++i){
		t2.clear();
		for(j = 0; j < 5; j++){
			cin >> temp;
			t2.push_back(temp);
		}
		sort(t2.begin(),t2.end());
		mp[hash_list(t2)] += 1;
	}

	
	//Find the course which had the maximum
	max = 0; 
	count = 0;
	for(auto j : mp){
		if(j.second > max){
			count = 1;
			max = j.second;
		}else if(j.second == max){
			++count;
		}
	}

	//Print out the number of students
	cout << max*count << "\n";
	
	
}
