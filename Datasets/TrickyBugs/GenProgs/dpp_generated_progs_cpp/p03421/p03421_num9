#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    
    if (A + B > N + 1 || A * B < N) {
        cout << -1 << endl;
        return 0;
    }
    
    vector<int> seq;
    for (int i = 0; i < B; i++) {
        seq.push_back(i + 1);
    }
    for (int i = 0; i < A - 1; i++) {
        seq.push_back(B);
    }
    
    int num = B + 1;
    int len = seq.size();
    while (len < N) {
        seq.push_back(num);
        if (num <= A) {
            len++;
        }
        num++;
    }
    
    reverse(seq.begin(), seq.end());
    for (int i = 0; i < N; i++) {
        cout << seq[i] << " ";
    }
    cout << endl;
    
    return 0;
}