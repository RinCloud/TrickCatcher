#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string S;
    std::cin >> S;

    int Q;
    std::cin >> Q;

    for (int i = 0; i < Q; i++) {
        int T;
        std::cin >> T;

        if (T == 1) {
            std::reverse(S.begin(), S.end());
        } else if (T == 2) {
            int F;
            char C;
            std::cin >> F >> C;

            if (F == 1) {
                S = C + S;
            } else if (F == 2) {
                S += C;
            }
        }
    }

    std::cout << S << std::endl;

    return 0;
}