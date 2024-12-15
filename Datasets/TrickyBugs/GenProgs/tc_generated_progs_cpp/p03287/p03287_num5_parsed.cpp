#include <iostream>
#include <map>

int main() {
    long long n, m, a, r = 0, s = 0;
    std::map<long long, int> v;
    std::cin >> n >> m;
    
    while (n--) {
        std::cin >> a;
        s += a;
        r += v[s % m]++;
    }
    std::cout << r + v[0];
    return 0;
}
