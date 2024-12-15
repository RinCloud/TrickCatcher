#include <iostream>

using namespace std;

long long int solve(int A, long long int B, long long int N) {
    long long int answer = 0;
    
    for (long long int x = 0; x <= N; x++) {
        long long int value = (A * x) / B - A * (x / B);
        answer = max(answer, value);
    }
    
    return answer;
}

int main() {
    int A;
    long long int B, N;
    cin >> A >> B >> N;
    
    long long int result = solve(A, B, N);
    cout << result << endl;
    
    return 0;
}