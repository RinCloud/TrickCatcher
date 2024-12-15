#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> operations(N+1, INT_MAX);
    operations[0] = 0;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j *= 6) {
            operations[i] = min(operations[i], operations[i - j] + 1);
        }
        for (int j = 1; j <= i; j *= 9) {
            operations[i] = min(operations[i], operations[i - j] + 1);
        }
    }
    
    cout << operations[N] << endl;
    
    return 0;
}