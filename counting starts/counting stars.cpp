//counting stars
#include <bits/stdc++.h>
using namespace std;

void fill_blanks(vector<vector<char>> &graph, int x, int y, int &length, int &breath){
	//Fill up the star
	if(x < 0 || y < 0 || x >= length || y >= breath || graph[x][y] == '#'){
		return;
	}
	else{
		graph[x][y] = '#';
		fill_blanks(graph, x+1, y,length, breath);
		fill_blanks(graph, x, y+1, length, breath);
		fill_blanks(graph, x-1, y, length, breath);
		fill_blanks(graph, x, y-1, length, breath);
		return;
	}
}

int main(){
	//Make the code faster
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables	
	int i, j, length, breath, count, c = 1;
	char temp;
	
	//Starting the loop to test all the test cases
	while(cin >> length >> breath){
		
		//resetting the variables
		vector<vector<char>> graph(length,vector<char>(breath));
		count = 0;
		
		//Receive the input for the graph
		for(i = 0; i < length; i++){
			for(j = 0; j < breath; j++){
				cin >> temp;
				graph[i][j] = temp;
			}
		}
		
		//Check for stars and fill up the star when it is found
		for(i = 0; i < length; ++i){
			for(j = 0; j < breath; ++j){
				if(graph[i][j] == '-'){
					++count;
					fill_blanks(graph,i,j, length, breath);
				}
			}
		}
		
		//Print out the count
		cout << "Case " << c++ << ": " << count << "\n";
		
	}
	
	
}
