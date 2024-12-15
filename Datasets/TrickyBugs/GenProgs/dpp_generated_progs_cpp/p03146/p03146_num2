#include <iostream>
#include <unordered_map>

int main() {
    int s;
    std::cin >> s;

    std::unordered_map<int, int> sequence;

    int i = 1;
    while (sequence.find(s) == sequence.end()) {
        sequence[s] = i;
        i++;
        if (s % 2 == 0) {
            s /= 2;
        } else {
            s = 3 * s + 1;
        }
    }

    std::cout << i - sequence[s] << std::endl;

    return 0;
}