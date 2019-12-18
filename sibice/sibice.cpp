//Sibice
#include <iostream>

using namespace std;

int main(){
	double matches,width,height,curr_match,hyp;
	cin >> matches >> width >> height;
	hyp = width*width + height*height;
	
	for(int i = 0; i < matches; i++){
		cin >> curr_match;
		if(hyp >= curr_match*curr_match){
			cout << "DA\n";
		}else{
			cout << "NE\n";
		}
		
	}
}
