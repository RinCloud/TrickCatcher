#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    unordered_map<int, int> freq;
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        freq[A[i]]++;
    }
    
    for (int k = 0; k < N; k++) {
        int count = 0;
        int num = A[k];
        freq[num]--;
        
        for (auto it = freq.begin(); it != freq.end(); it++) {
            int val = it->second;
            count += val * (val - 1) / 2;
        }
        
        freq[num]++;
        cout << count << endl;
    }
    
    return 0;
}