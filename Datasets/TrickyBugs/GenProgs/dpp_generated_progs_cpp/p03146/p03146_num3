#include <iostream>
#include <unordered_set>

int main() {
    int s;
    std::cin >> s;

    std::unordered_set<int> seen;
    seen.insert(s);

    int a_i = s;
    int m = 1;

    while (true) {
        m++;

        if (a_i % 2 == 0) {
            a_i /= 2;
        } else {
            a_i = 3 * a_i + 1;
        }

        if (seen.count(a_i) > 0) {
            break;
        }

        seen.insert(a_i);
    }

    std::cout << m << std::endl;

    return 0;
}