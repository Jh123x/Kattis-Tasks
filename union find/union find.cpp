//unionfind
#include <bits/stdc++.h>
using namespace std;

//Declaring the vars
vector<int>parent;

int find_set(int &source){
	//Finding the parent for the UFDS
	if(parent[source] == source){
		//Found the ancestor for the set
		return source;
	}else{
		//Recurse and set the parent for current node as source to reduce future search times
		int p = find_set(parent[source]);
		parent[source] = p;
		return p;
	}
}

bool union_find(int &source, int &target){
	//Checking if 2 sources are part of the same set
	int x = find_set(source);
	int y = find_set(target);
	return x == y;
}

void combine(int &source, int &target){
	//Union 2 sets together
	int x = find_set(source);
	int y = find_set(target);
	parent[y] = x;
}

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	char command;
	int first, second, elements, queries, temp, curr;
	
	//Taking in the different inputs
	cin >> elements >> queries;
	
	//Initializing the vectors
	parent = vector<int>(elements);
	
	//Initialising the vector;
	for(int i = 0; i < elements; ++i){
		parent[i] = i;
	}
		
	//Going through all the of queries
	while(queries--){
		cin >> command;
		
		switch(command){
			case '?':{
				//If the command is a query
				cin >> first >> second;
				if(parent[first] == -1){
					//If the element is not joint to any set return no
					cout << "no\n";
				}else{
					//Check if the element is in the set
					if(union_find(first,second)){
						cout << "yes\n";
					}else{
						cout << "no\n";
					}
				}
				break;
			}
			
			case '=':{
				//Joining of the 2 sets together
				cin >> first >> second;
				combine(first,second);
				break;
			}
		}
	}
}
