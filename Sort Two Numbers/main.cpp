#include <iostream>


int main(){
    std::cin.tie(NULL);
    int total_judge, current_judge, i, temp, judge_diff;
    double sum = 0;
    std::cin >> total_judge >> current_judge;
    for(i = 0; i < current_judge; ++i){
        std::cin >> temp;
        sum += temp;
    }
    judge_diff = total_judge - current_judge;
    std::cout << (judge_diff * -3 + sum) / total_judge << " " << (sum + judge_diff * 3) / total_judge << std::endl;
    return 0;
}