#include <iostream>
#include <vector>

int main() {
    long long N, X, M;
    std::cin >> N >> X >> M;

    std::vector<long long> A(M, -1);
    std::vector<long long> prefixSum;
    prefixSum.push_back(X);
    A[X] = 0;

    long long nextValue = X;
    long long cycleStartIndex = -1;
    long long cycleLength = 0;

    for (long long i = 1; i < N; i++) {
        nextValue = (nextValue * nextValue) % M;
        prefixSum.push_back((prefixSum[i - 1] + nextValue) % M);
        
        if (A[nextValue] != -1) {
            cycleStartIndex = A[nextValue];
            cycleLength = prefixSum.size() - A[nextValue];
            break;
        }
        
        A[nextValue] = i;
    }
    
    if (cycleStartIndex != -1) {
        long long cycleSum = 0;
        for (long long i = cycleStartIndex; i < prefixSum.size(); i++) {
            cycleSum += prefixSum[i];
        }
        
        long long nonCycleSum = 0;
        for (long long i = 0; i < cycleStartIndex; i++) {
            nonCycleSum += prefixSum[i];
        }

        long long completeCycles = (N - cycleStartIndex) / cycleLength;
        long long remainingValues = (N - cycleStartIndex) % cycleLength;

        long long result = nonCycleSum + completeCycles * cycleSum;
        for (long long i = cycleStartIndex; i < cycleStartIndex + remainingValues; i++) {
            result += prefixSum[i];
        }

        std::cout << result << std::endl;
    } else {
        std::cout << prefixSum[N - 1] << std::endl;
    }

    return 0;
}