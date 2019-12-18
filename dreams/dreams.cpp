//dream
#include <bits/stdc++.h>
using namespace std;

int main(){
	//Make the code faster
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	//Declaring all the variables
	vector<string> events; //Act as a stack for the events which happened
	unordered_map<string,int> mp, l; //To check if the event has happened or not
	char command;
	string event;
	int queries, dreams, con, line, ev = 0;
	
	//Taking in the number of queries
	cin >> queries;
	
	//Iterating through all of the queries
	for(int i = 1; i <= queries; ++i){
		
		//Take in the command for each query
		cin >> command;
		
		//Process the command
		switch(command){
			
			//If it is an event
			case 'E':{
				cin >> event;
				++ev;
				
				//Push event to the back of the stack
				events.push_back(event);
				
				//Add the event to the unordered map to mark it as happened
				mp[event] = 2;
				l[event] = ev;
				break;
			}
			
			//If it is a dream
			case 'D':{
				cin >> dreams;
				
				//Remove the top n elements from the event which happened
				while(dreams--){
					mp.erase(events.back());
					events.pop_back();
					--ev;
				}
				break;
			}
			
			//If it is a scenerio
			case 'S':{
				cin >> dreams;
				
				//Se the consistent flag to be true
				con = 2;
				line = 0;
				
				//Iterate through the events
				while(dreams--){
					cin >> event;
					
					//If the event is the negation
					if(event[0] == '!'){
						event = event.substr(1,event.size());
						
						//If the event happened
						if(mp[event] == 2){
							if(con == 2){
								con = 1;
								line = l[event];
							}else{
								con = 0;
							}
						}
						
					}else{
						
						//Check if the event has happened
						if(!mp[event]){
							con = 0;
						}
					}
				}
				
				//Print the output
				switch(con){
					case 0:{
						cout << "Plot Error\n";
						break;
					}
					case 1:{
						cout << ev - line + 1 << " Just A Dream\n";
						break;
					}
					case 2:{
						cout << "Yes\n";
						break;
					}
				}
				
				break;
			}
		}
		
	}
	
}
