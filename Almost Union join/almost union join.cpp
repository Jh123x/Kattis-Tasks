//Almost UFDS
#include <bits/stdc++.h>
using namespace std;

vector<int> parent;

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
	if(x == y){
		return;
	}
	parent[y] = x;
}

void move(int &from, int &to){
	//Move 1 item from 1 set to another
	int x = find_set(from);
	int y = find_set(to);
	
	if(x == y){
		return;
	}
	
	if(x == from){
		int temp = -1;
		for(int i = 0; i < parent.size(); ++i){
			if(parent[i] == from){
				if(temp == -1){
					temp = i;
				}
				parent[i] = temp;
			}
		}
	}else{
		for(int i = 0; i < parent.size(); ++i){
			if(parent[i] == from){
				parent[i] = parent[from];
			}
		}
	}
		
	
	parent[from] = y;
}

pair<int,int> get_size(int &from){
	int x = find_set(from), result = 0, t = 0, y;
	for(int i= 0; i < parent.size(); ++i){
		y = find_set(i);
		if(y == x){
			result += 1;
			t += i;
		}
	}
	return pair<int,int>(result,t);
}

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the vars
	int nodes, queries, command, from, to;
	cin >> nodes >> queries;
	
	//Initialising the UFDS
	for(int i = 0; i < nodes+1; ++i){
		parent.push_back(i);
	}
	
	//Taking in the queries
	while(queries--){
		cin >> command;
		switch(command){
			case 1 :{
				//Combine 2 sets together
				cin >> from >> to;
				combine(from,to);
				break;
			}
			case 2:{
				//Move an item from 1 set to another
				cin >> from >> to;
				move(from,to);
				break;
			}
			case 3:{
				cin >> from;
				auto temp = get_size(from);
				int j = temp.first;
				int l = temp.second;
				cout << j << " " << l << "\n";
				break;
			}
		}
	}
	
	
	
}
