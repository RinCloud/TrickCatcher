#include <iostream>
#include <map>
#include <string>

int main() {
    int N;
    std::cin >> N;
    
    std::map<std::string, int> verdicts;
    
    for (int i = 0; i < N; i++) {
        std::string verdict;
        std::cin >> verdict;
        verdicts[verdict]++;
    }
    
    std::cout << "AC x " << verdicts["AC"] << std::endl;
    std::cout << "WA x " << verdicts["WA"] << std::endl;
    std::cout << "TLE x " << verdicts["TLE"] << std::endl;
    std::cout << "RE x " << verdicts["RE"] << std::endl;
    
    return 0;
}