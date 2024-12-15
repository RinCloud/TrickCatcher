#include <iostream>
#include <unordered_set>

int main() {
    int s;
    std::cin >> s;

    std::unordered_set<int> sequence;
    sequence.insert(s);

    int current = s;
    int m = 1;
    while (true) {
        if (current % 2 == 0) {
            current /= 2;
        } else {
            current = 3 * current + 1;
        }
        m++;

        if (sequence.count(current) > 0) {
            break;
        }
        sequence.insert(current);
    }

    std::cout << m << std::endl;

    return 0;
}