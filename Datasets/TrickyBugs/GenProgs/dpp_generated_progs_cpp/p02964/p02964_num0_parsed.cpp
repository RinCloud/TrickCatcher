#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    unordered_set<int> s;
    vector<int> result;
    
    for(int i = 0; i < N * K; i++) {
        if(s.find(A[i % N]) == s.end()) {
            s.insert(A[i % N]);
            result.push_back(A[i % N]);
        } else {
            while(result.back() != A[i % N]) {
                s.erase(result.back());
                result.pop_back();
            }
        }
    }
    
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
