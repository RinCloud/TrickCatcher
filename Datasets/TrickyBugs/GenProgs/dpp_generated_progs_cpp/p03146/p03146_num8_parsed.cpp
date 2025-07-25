#include <iostream>
#include <unordered_map>

int main() {
    int s;
    std::cin >> s;

    std::unordered_map<int, int> a_map;
    int a = s;
    int m = 1;
    while (true) {
        if (a_map.find(a) != a_map.end()) {
            std::cout << m << std::endl;
            break;
        }
        a_map[a] = m;
        m++;
        if (a % 2 == 0) {
            a = a / 2;
        } else {
            a = 3 * a + 1;
        }
    }

    return 0;
}
