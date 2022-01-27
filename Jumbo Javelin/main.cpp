#include <iostream>


int main(){
    // Make code faster
    std::cin.tie(0);

    int curr_length, no_rod;
    std::cin >> no_rod;
    int sum = - no_rod;
    while(no_rod--){
        std::cin >> curr_length;
        sum += curr_length;
    }
    std::cout << sum - no_rod << std::endl;
    return 0;
}