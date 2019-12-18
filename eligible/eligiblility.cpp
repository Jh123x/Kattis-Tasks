//eligibility
#include <bits/stdc++.h>
using namespace std;

int get_year(string datetime){
	int result = 0;
	for(int i = 0; i < 4; i++){
		result = result * 10 + datetime[i] - '0';
	}
	return result;
}

int main(){
	int inputs, completed;
	string name, s_date, b_date;
	cin >> inputs;
	for(int i = 0; i < inputs; i++){
		cin >> name >> s_date >> b_date >> completed;
		if(get_year(s_date) >= 2010 || get_year(b_date) >= 1991){
			cout << name << " eligible" << endl;
		}else if(completed >= 41){
			cout << name << " ineligible" << endl; 
		}else{
			cout << name << " coach petitions" << endl;
		}
	}
}
