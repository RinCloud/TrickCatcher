#include <iostream>
#include <unordered_map>

int main() {
    int s;
    std::cin >> s;

    std::unordered_map<long long, int> mp;
    mp[s] = 1;

    long long a = s, m = 1;
    while (true) {
        m++;
        
        if (a % 2 == 0) {
            a /= 2;
        } else {
            a = 3 * a + 1;
        }
        
        if (mp.find(a) != mp.end()) {
            std::cout << m << std::endl;
            break;
        } else {
            mp[a] = 1;
        }
    }

    return 0;
}