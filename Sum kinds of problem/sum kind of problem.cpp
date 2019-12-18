//Sum kind of problem
#include <bits/stdc++.h>
using namespace std;

int main(){
	long double inputs, result, max, line, result_odd, result_even, i;
	
	//Taking the number of input cases
	cin >> inputs;
	
	//Looping through the number of cases
	for(i = 0; i < inputs; i++){
		
		//Resetting all the variables
		result = 0, result_odd = 0, result_even = 0;
		
		//Taking in the input on each line
		cin >> line >> max;
		
		//Case of even number of max terms
		result = (max / 2) * (2+(max-1));
		result_odd = (max / 2) * (2 + (max-1) * 2);
		result_even =  (max / 2) * (4 + (max-1) * 2);
		
		
		//Printing the results
		cout << setprecision(13);
		cout << line << " " << result << " " << (int) result_odd << " " << (int) result_even << endl;
	}
}
