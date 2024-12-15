#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string S;
    std::cin >> S;

    int Q;
    std::cin >> Q;

    int T, F;
    char C;

    for (int i = 0; i < Q; i++) {
        std::cin >> T;
        if (T == 1) {
            std::reverse(S.begin(), S.end());
        } else {
            std::cin >> F >> C;
            if (F == 1) {
                S = C + S;
            } else {
                S += C;
            }
        }
    }

    std::cout << S << std::endl;

    return 0;
}