#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<string> strings(N);
    for (int i = 0; i < N; i++) {
        cin >> strings[i];
    }
    
    map<string, int> freq;
    for (string s : strings) {
        sort(s.begin(), s.end());
        freq[s]++;
    }
    
    long long pairs = 0;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        int count = it->second;
        pairs += (long long)count * (count - 1) / 2;
    }
    
    cout << pairs << endl;

    return 0;
}