#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    // read inputs
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    
    // count the frequency of each integer
    map<int, int> freq;
    for (int i = 0; i < N; i++)
        freq[A[i]]++;
    
    // sort the frequency in decreasing order
    vector<int> freqCount;
    for (auto it = freq.begin(); it != freq.end(); it++)
        freqCount.push_back(it->second);
    sort(freqCount.rbegin(), freqCount.rend());
    
    // calculate the number of balls to rewrite
    int ans = 0;
    for (int i = K; i < freqCount.size(); i++)
        ans += freqCount[i];
    
    // print the result
    cout << ans << endl;
    
    return 0;
}