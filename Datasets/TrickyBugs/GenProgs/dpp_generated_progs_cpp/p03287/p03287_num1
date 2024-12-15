#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1;
    long long prefixSum = 0;
    long long pairCount = 0;
    
    for (int i = 0; i < N; i++) {
        prefixSum += A[i];
        prefixSum %= M;
        
        pairCount += prefixSumCount[prefixSum];
        prefixSumCount[prefixSum]++;
    }
    
    cout << pairCount << endl;
    
    return 0;
}