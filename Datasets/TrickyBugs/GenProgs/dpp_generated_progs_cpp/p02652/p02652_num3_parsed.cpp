#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string S;
    std::cin >> S;

    int count0 = 0, count1 = 0, countQ = 0;

    for (char c : S) {
        if (c == '0') {
            count0++;
        } else if (c == '1') {
            count1++;
        } else {
            countQ++;
        }
    }

    int unbalancedness = std::max(count0, count1) + countQ / 2;

    std::cout << unbalancedness << std::endl;

    return 0;
}