#include <iostream>
#include <string>

int main() {
    std::string S;
    long long K;
    std::cin >> S >> K;

    int n = S.length();
    int cnt = 0;

    if (n == 1) {
        cnt = K / 2;
    } else {
        if (S[0] == S[n - 1]) {
            // Count adjacent characters to be replaced
            int startPairCnt = 0;
            int endPairCnt = 0;

            for (int i = 1; i < n; i++) {
                if (S[i] == S[i - 1]) {
                    startPairCnt++;
                } else {
                    break;
                }
            }

            for (int i = n - 2; i >= 0; i--) {
                if (S[i] == S[i + 1]) {
                    endPairCnt++;
                } else {
                    break;
                }
            }

            // Count characters that need to be replaced in the middle portion
            int middleCnt = 0;
            int middleStart = startPairCnt;
            int middleEnd = n - endPairCnt - 1;

            for (int i = middleStart + 1; i < middleEnd; i++) {
                if (S[i] == S[i - 1]) {
                    middleCnt++;
                    i++;
                }
            }

            // Calculate the minimum number of operations required
            cnt = startPairCnt / 2 + endPairCnt / 2 + middleCnt * (K - 1) + (middleCnt + startPairCnt % 2) / 2 +
                  (middleCnt + endPairCnt % 2) / 2;
        }
    }

    std::cout << cnt * K << std::endl;

    return 0;
}