#include <iostream>
#include <limits>
typedef long long LL;

int main() {
    LL K;
    std::cin >> K;

    LL ans = std::numeric_limits<LL>::max();
    for(LL i = 1; i < 100000; i++) {
        LL sum = 0;
        LL num = K * i;

        while(num > 0) {
            sum += num % 10;
            num /= 10;
        }

        ans = std::min(ans, sum);
    }

    std::cout << ans << std::endl;

    return 0;
}