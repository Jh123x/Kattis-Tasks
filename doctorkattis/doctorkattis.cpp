//Doctor Kattis
#include <bits/stdc++.h>
using namespace std;

int main(){
    //Make the code run faster
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //constructing the variables
    long i, inputs;
    int i_level, max, command, size = 0, count = 200000;
    string name,top = "";
    unordered_map<string,pair<int,int>> mp;
    set<pair<int,pair<int,string>>> s;

    //Taking in the number of commands
    cin >> inputs;
    
    //Loop for the number of inputs
    for(i = 0; i < inputs; ++i){

        //Take in the command
        cin >> command;
        
        //Processing each of the commands
        switch(command){
            
            //Add the cat into the data structure
            case 0:{

                //Take the name and the infection level
                cin >> name >> i_level;

                //Increment the size
                ++size;

                //Store the pair in the unordered_map
                mp[name] = pair<int,int>(i_level,count);

                //Insert the pair into the set
                s.insert(pair<int,pair<int,string>>(i_level,pair<int,string>(count,name)));

                //Decrement the count
                --count;

                //Check if it should be at the top
                if(top == "" || i_level > mp[top].first){
                    top = name;
                }
                
                break;
            }
            
            //Add increment the infection level for the cat with the particular name
            case 1:{

                //Get the name and infection level
                cin >> name >> i_level;

                //Store the pair in j
                auto j = pair<int,pair<int,string>>(mp[name].first,pair<int,string>(mp[name].second,name));
                
                //Remove the pair from the set
                s.erase(j);

                //Store the new pair at j
                mp[name] = pair<int,int>(mp[name].first + i_level,mp[name].second);

                //Assign J to updated set
                j = pair<int,pair<int,string>>(mp[name].first,pair<int,string>(mp[name].second,name));

                //Insert the updated pair back to the set
                s.insert(j);

                //Check if the name is at the top
                if(mp[name] > mp[top]){

                    //Assign the top to the name
                    top = name;
                }
                break;
            }
            
            //Remove the kitten from the queue
            case 2:{
                //Take in the name of the kitten
                cin >> name;

                //Create pair
                auto j = pair<int,pair<int,string>>(mp[name].first,pair<int,string>(mp[name].second,name));

                //Remove pair from the set
                s.erase(j);

                //Decrement the size
                --size;

                //If size is 0 reset the top
                if(size == 0){
                    top == "";
                }
                
                //Else if top is removed
                else if(top == name){

                    //Set the new top to top
                    top = s.rbegin()->second.second;
                    
                }

                //Erase the removed kitten from the map
                mp.erase(name);
                break;
            }
            
            //Show the kitten that is currently at the top of the data structure
            case 3:{

                //If size is 0 there is no top
                if(size == 0){
                    cout << "The clinic is empty\n";
                }
                //Otherwise print the top
                else{
                    cout << top << "\n";
                }
                break;
            }
        }
    }
}