//peasoup
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int res, dishes;
	bool pe, pa, a = false;
	string d, name;
	
	//Take in the number of restaurants
	cin >> res;
	
	//Loop through the number of restaurants
	while(res--){
		
		//Reset the vars
		pe = false;
		pa = false;
		
		//Take in the number of dishes in the restaurant and the name
		cin >> dishes;
		
		//Consume the extra \n
		cin.get();
		
		//Getting the name of the restaurant
		getline(cin, name);
		name = name.substr(0,name.size());
				
		//Loop through the number of dishes
		for(int i = 0; i < dishes; ++i){
			
			//Get the line
			getline(cin,d);
//			cout << d << ".\n";
			
//			//Remove the \n at the end of the line
//			d = d.substr(0,d.size());
			
			//Check if it is pancake or peasoup
			if(d == "pea soup"){
				pe = true;
			}else if(d == "pancakes"){
				pa = true;
			}
		}
		
		//Check if the restaurant has both
		if(pe && pa){
			cout << name << "\n";
			a = true;
			break;
		}
		
		
	}
	
	if(!a){
		cout << "Anywhere is fine I guess\n";
	}
	
}
