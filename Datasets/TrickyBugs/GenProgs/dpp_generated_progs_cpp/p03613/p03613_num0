#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    
    map<int, int> count;
    for (int i = 0; i < N; ++i) {
        count[a[i]]++;
    }
    
    int maxCount = 0;
    for (auto it = count.begin(); it != count.end(); ++it) {
        maxCount = max(maxCount, it->second);
    }
    
    cout << maxCount << endl;

    return 0;
}