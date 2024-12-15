#include <iostream>
#include <map>
#include <string>

int main() {
    int N;
    std::cin >> N;

    std::map<std::string, int> verdicts;
    verdicts["AC"] = 0;
    verdicts["WA"] = 0;
    verdicts["TLE"] = 0;
    verdicts["RE"] = 0;

    for (int i = 0; i < N; i++) {
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