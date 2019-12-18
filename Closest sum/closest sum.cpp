//Closest Sums
#include <bits/stdc++.h>
using namespace std;

int closest_sum(vector<long> &v, long num){
	long high = v.size()-1, low = 0, min = 0, diff = INT_MAX, temp;
	while(high > low){
		temp = v[high] + v[low];
		if(diff > abs(num-temp)){
			min = temp;
			diff = abs(num-temp);
		}
		if(temp > num){
			--high;
		}else if(temp == num){
			return num;
		}else if(temp < num){
			++low;
		}else{
			cout << "ERROR\n";
		}
	}
	return min;
}



int main(){
	//Initialising the different varables that will be used
	long inputs, temp,i, count = 1,sum;
	vector<long> v;
	
	//Creating a while loop to test when the input ends
	while(cin >> inputs){
		
			//Resetting the variables
			v.clear();
			
			//Taking in the numbers for this input
			for(i = 0; i < inputs; i++){
				cin >> temp;
				v.push_back(temp);
			}
			
			//Sorting the vector using the built in sort in the library
			sort(v.begin(),v.end(),less<long>());
			
			//Getting the queries
			cin >> inputs;
			
			//Print the case number
			cout << "Case " << count++ << ":\n";
			
			//Answering all the queries
			for(i = 0; i < inputs; ++i){
				cin >> temp;
				sum = closest_sum(v, temp);
				cout << "Closest sum to " << temp << " is " << sum << ".\n";
			}		
	}
}
