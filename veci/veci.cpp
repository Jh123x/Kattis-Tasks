//Veci
#include <bits/stdc++.h>
using namespace std;

void i_to_s(int num, vector<char> &r){
	for(auto c : to_string(num)){
		r.push_back(c);
	}
}

int s_to_i(vector<char> s){
	int result = 0;
	for(int i = 0; i < s.size(); i++){
		result = result * 10 + s[i] - '0';
	}
	return result;
}

void get_perms(int num, vector<int> &com){
	vector<char> v;
	i_to_s(num,v);
	do { 
        com.push_back(s_to_i(v));
    } while (next_permutation(v.begin(), v.end())); 
}

int main(){
	//Make code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Initialise vars
	int i, num;
	vector<int> nums;
	
	cin >> num;
	get_perms(num,nums);
	sort(nums.begin(),nums.end());
	for(i = 0; i < nums.size(); i++){
		if(nums[i] > num){
			cout << nums[i] << "\n";
			return 0;
		}
	}
	cout << "0\n";
}
