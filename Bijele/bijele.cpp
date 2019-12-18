//Bijele
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> correct = {1,1,2,2,2,8};
	vector<int> input;
	int temp;
	for(int i = 0; i < 6; i++){
		cin >> temp;
		input.push_back(correct[i]-temp);
	}
	for(int i = 0; i < 6; i++){
		cout << input[i] << " ";
	}
}
