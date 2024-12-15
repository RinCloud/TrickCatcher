#include <iostream>
#include <string>
#include <map>

int main() {
    int N;
    std::cin >> N;

    std::map<std::string, int> verdictCount;
    verdictCount["AC"] = 0;
    verdictCount["WA"] = 0;
    verdictCount["TLE"] = 0;
    verdictCount["RE"] = 0;

    for (int i = 0; i < N; i++) {
        std::string verdict;
        std::cin >> verdict;
        verdictCount[verdict]++;
    }

    std::cout << "AC x " << verdictCount["AC"] << std::endl;
    std::cout << "WA x " << verdictCount["WA"] << std::endl;
    std::cout << "TLE x " << verdictCount["TLE"] << std::endl;
    std::cout << "RE x " << verdictCount["RE"] << std::endl;

    return 0;
}