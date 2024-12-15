#include <iostream>
#include <vector>

int smallestSumOfDigits(int K) {
    std::vector<int> remainder(K, -1);
    std::vector<int> sumOfDigits(K, -1);
    remainder[0] = 0;
    sumOfDigits[0] = 0;
    int queueStart = 0;
    int queueEnd = 1;
    std::vector<int> queue(K);
    queue[0] = 0;
    while (queueStart < queueEnd) {
        int currentRemainder = queue[queueStart];
        for (int i = 0; i <= 9; i++) {
            int nextRemainder = (currentRemainder * 10 + i) % K;
            if (remainder[nextRemainder] != -1) {
                continue;
            }
            remainder[nextRemainder] = currentRemainder;
            sumOfDigits[nextRemainder] = sumOfDigits[currentRemainder] + i;
            if (nextRemainder == 0) {
                return sumOfDigits[nextRemainder];
            }
            queue[queueEnd++] = nextRemainder;
        }
        queueStart++;
    }
    return -1;
}

int main() {
    int K;
    std::cin >> K;
    std::cout << smallestSumOfDigits(K) << std::endl;
    return 0;
}