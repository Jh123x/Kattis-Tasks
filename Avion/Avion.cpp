//Avion
#include <bits/stdc++.h>
using namespace std;

int main(){
	string name;
	int size = 0;
	for(int i = 0; i < 5; i++){
		cin >> name;
		if(name.find(string("FBI")) != std::string::npos){
			cout << i+1 << " ";
			++size;
		}
	}
	if(size == 0){
		cout << "HE GOT AWAY!\n";
	}else{
		cout << "\n";
	}

}
