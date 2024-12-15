#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    unordered_set<int> s;
    vector<int> result;
    for (int i = 0; i < N * K; i++) {
        int x = A[i % N];
        if (s.count(x)) {
            while (result.back() != x) {
                s.erase(result.back());
                result.pop_back();
            }
            result.pop_back();
        } else {
            s.insert(x);
            result.push_back(x);
        }
    }
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}