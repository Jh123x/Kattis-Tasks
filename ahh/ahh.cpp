//aah
#include<iostream>
using namespace std;

int main(){
	string in,out;
	cin >> in >> out;
	if(in.length() >= out.length()){
		cout << "go";
		return 0;
	}else{
		cout <<"no";
		return 0;
	}
}
