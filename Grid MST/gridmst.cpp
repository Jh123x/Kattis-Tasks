//Grid MST
#include <bits/stdc++.h>
using namespace std;

int find_set(vector<int> &ufds, int &a){
	//Check if the 2 elements are part of the same set in the UFDS
	if(ufds[a] == a){
		//If the parent of the current node its itself, then the node is the root of the set
		return a;
	}else{
		//If not find the root of the set and set itself to the parent
		int r = find_set(ufds,ufds[a]);
		ufds[a] = r;
		return r;
	}
}

bool u_find(vector<int> &ufds, int &a, int &b){
	//Finds if 2 vars are connected 
	int x = find_set(ufds,a);
	int y = find_set(ufds,b);
	return x == y;
}

void u_join(vector<int> &ufds, int &a, int &b){
	//Join the 2 sets together
	int x = find_set(ufds,a);
	int y = find_set(ufds,b);
	ufds[x] = y;
}

int main(){
	//Make the code run faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring the variables
	int pts, dist;
	
	//Taking in the number of pts
	cin >> pts;
	
	//Vectors to store the coord
	vector<int> x(pts), y(pts);
	
	//Take in the input for pts
	for(int i = 0; i < pts; ++i){
		//Take in the start coord and the end coord
		cin >> x[i] >> y[i];
	}
	
	//Creating the edge list of the matrix to be stored
	vector<tuple<int,int,int>> mp;
	vector<bool>v2(pts);
	
	//Creating the ufds and initializing it
	vector<int> ufds(pts);
	
	//Calculating the manhattan distance between all of the nodes that are stated
	//TODO Make the number of nodes to be checked lower
	for(int i = 0; i < pts; ++i){
		ufds[i] = i;
		for(int j = i+1; j < pts; ++j){
			
			if(v2[i] && v2[j]){
				continue;
			}
			
			//Calculating the distance of the distance of the items
			dist = abs(x[i]-x[j]) + abs(y[i]-y[j]);
			
			//Adding the items to the edge list of the items
			mp.emplace_back(tuple<int,int,int>(dist,i,j));
		}
	}
	
	//Sort the edgelist for kruskals in reverse as pop_back is O(1)
	sort(mp.begin(),mp.end(),greater<tuple<int,int,int>>());
	
	//Run kruskals
	int e = 0, result = 0, start, end, weight;
	tuple<int,int,int> t;
	while(mp.size() > 0 && e < pts-1){
		
		//Take the smallest element in the set
		t = mp.back();
		mp.pop_back();
		
		//Decompose it
		weight = get<0>(t);
		start = get<1>(t);
		end = get<2>(t);
		
		//If they are connected discard it
		if(u_find(ufds,start,end)){
			continue;
		}
		
		//If not add them to the mst
		result += weight;
		
		//Increment the number of edges
		++e;
		
		//Union them together
		u_join(ufds,start,end);
	}
	
	//Output the result
	cout << result << "\n";
	
}

