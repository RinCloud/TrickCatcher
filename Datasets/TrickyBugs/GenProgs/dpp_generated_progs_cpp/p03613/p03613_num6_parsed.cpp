#include <iostream>
#include <vector>
#include <unordered_map>
 
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
 
    unordered_map<int, int> counts;
    for (int i = 0; i < N; i++) {
        counts[a[i]]++;
        counts[a[i] - 1]++;
        counts[a[i] + 1]++;
    }
 
    int maxCount = 0;
    for (auto it = counts.begin(); it != counts.end(); it++) {
        maxCount = max(maxCount, it->second);
    }
 
    cout << maxCount << endl;
 
    return 0;
}