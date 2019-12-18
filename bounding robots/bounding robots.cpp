//bounding robots
#include <bits/stdc++.h>
using namespace std;

void move(int &rx, int &ry, int &ax, int &ay, char dir, int steps){
	if(dir == 'u'){
		ry += steps;
		ay += steps;
	}else if(dir == 'd'){
		ry -= steps;
		ay -= steps;
	}else if(dir == 'l'){
		ax -= steps;
		rx -= steps;
	}else if(dir == 'r'){
		ax += steps;
		rx += steps;
	}
}

void check_lim(int &ax, int &ay, int x, int y){
	if(ax > x-1){
		ax = x-1;
	}else if( ax < 0){
		ax = 0;
	}
	if(ay > y-1){
		ay = y-1;
	}else if(ay < 0){
		ay = 0;
	}
}

int main(){
	int x=1, y=1, moves, rx, ry, ax, ay, steps;
	char dir;
	
	while(true){
		rx = 0,ry = 0,ax = 0,ay = 0;
		cin >> x >> y;
		if(x == 0 && y == 0){
			return 0;
		}
		cin >> moves;
		for(int i =0; i< moves; i++){
			cin >> dir >> steps;
			move(rx, ry, ax, ay, dir, steps);
			check_lim(ax, ay, x, y);
		}
		cout << "Robot thinks " << rx << " " << ry << "\n";
		cout << "Actually at " << ax << " " << ay << "\n";
	}
	
}
