//mosquito multiplication
#include <bits/stdc++.h>
using namespace std;

int main(){
	long mosquitoes,pupa,larva,eggs,r_larva,s_pupa,weeks,i,temp;
	while(cin >> mosquitoes >> pupa >> larva >> eggs >> r_larva >> s_pupa >> weeks){
		for(i = 0; i < weeks; i++){
			temp = mosquitoes * eggs;
			mosquitoes = pupa/s_pupa;
			pupa = larva/r_larva;
			larva = temp;
		}
		cout << mosquitoes<< endl;
	}

}
