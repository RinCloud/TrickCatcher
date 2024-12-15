#include <iostream>
#include <vector>

using namespace std;

int countPossiblePairs(int N, string S) {
    vector<int> A(2000000001, 0);
    int P = 0;
    A[1000000000] = 0;
    
    vector<int> prefixSum(N+1, 0);
    for (int i = 0; i < N; i++) {
        if (S[i] == '+') {
            prefixSum[i+1] = prefixSum[i] + 1;
        } else if (S[i] == '-') {
            prefixSum[i+1] = prefixSum[i] - 1;
        } else if (S[i] == '>') {
            P++;
        } else if (S[i] == '<') {
            P--;
        }
    }
    
    int answer = 0;
    vector<int> count(2000000001, 0);
    count[0]++;
    
    for (int i = 1; i <= N; i++) {
        answer += count[prefixSum[i] - P];
        count[prefixSum[i] - P]++;
    }
    
    return answer;
}

int main() {
    int N;
    string S;
    cin >> N >> S;
    
    int answer = countPossiblePairs(N, S);
    
    cout << answer << endl;
    
    return 0;
}