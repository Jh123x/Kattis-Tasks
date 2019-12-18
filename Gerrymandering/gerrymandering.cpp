//Gerrymandering
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(10);
	
	//Declaring the variables
	int pre, dis;
	double wa = 0, wb = 0, d , va, vb, total = 0;
	
	//Taking in the number of pre and dis
	cin >> pre >> dis;
	
	//Making the vector to store the district votes
	vector<int> av(dis+1,0), bv(dis+1,0);
	
	//Loop through the number of districts to get all the votes
	for(int i = 0; i < pre; ++i){
		cin >> d >> va >> vb;
		total += va + vb;
		av[d] += va;
		bv[d] += vb;
	}
	
	//Loop through the districts 1 more time to count wasted votes
	for(int i = 1; i <= dis; ++i){
		
		if(av[i] > bv[i]){
			//If district A won
			wb += bv[i];
			wa += av[i] - (av[i] + bv[i])/2 - 1;
			cout << "A " <<  av[i] - (av[i] + bv[i])/2 - 1 << " " << bv[i] << "\n";
			
		}else if(av[i] < bv[i]){
			//If district B won
			wa += av[i];
			wb += bv[i] - (bv[i] + av[i])/2 - 1;
			cout << "B " << av[i] << " " << bv[i] - (av[i] + bv[i])/2 - 1 << "\n";
		}
	}
	
	//Print out the total
	cout << abs(wa-wb) / total << "\n";
	
}
