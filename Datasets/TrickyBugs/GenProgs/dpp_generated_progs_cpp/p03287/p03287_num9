#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    map<long long, int> freq;
    freq[0]++;
    
    long long prefixSum = 0;
    long long count = 0;
    
    for (int i = 0; i < N; i++) {
        prefixSum = (prefixSum + A[i]) % M;
        count += freq[prefixSum];
        freq[prefixSum]++;
    }
    
    cout << count << endl;
    
    return 0;
}