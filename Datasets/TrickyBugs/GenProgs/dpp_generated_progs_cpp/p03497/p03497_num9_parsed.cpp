#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> balls(N);
    for (int i = 0; i < N; i++) {
        cin >> balls[i];
    }
    
    unordered_map<int, int> counts;
    for (int i = 0; i < N; i++) {
        counts[balls[i]]++;
    }

    vector<int> frequencies;
    for (auto it = counts.begin(); it != counts.end(); it++) {
        frequencies.push_back(it->second);
    }
    
    sort(frequencies.begin(), frequencies.end());
    
    int numToRewrite = 0;
    int numIntegers = counts.size();
    for (int i = 0; i < numIntegers - K; i++) {
        numToRewrite += frequencies[i];
    }

    cout << numToRewrite << endl;

    return 0;
}