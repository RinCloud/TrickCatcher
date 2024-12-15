#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int n;
    std::cin >> n;
    
    std::unordered_map<std::string, int> verdicts;
    
    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        verdicts[s]++;
    }
    
    std::cout << "AC x " << verdicts["AC"] << std::endl;
    std::cout << "WA x " << verdicts["WA"] << std::endl;
    std::cout << "TLE x " << verdicts["TLE"] << std::endl;
    std::cout << "RE x " << verdicts["RE"] << std::endl;
    
    return 0;
}