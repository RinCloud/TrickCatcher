#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    
    vector<int> x(N);
    vector<int> t(N);
    
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    for (int i = 0; i < N; i++) {
        cin >> t[i];
    }
    
    int totalTime = 0;
    int prevTime = 0;
    int prevStation = 0;
    
    for (int i = 0; i < N; i++) {
        totalTime += x[i] - prevStation;
        int timeDiff = max(t[i], prevTime + t[i] - totalTime);
        totalTime += timeDiff;
        prevTime = timeDiff;
        prevStation = x[i];
    }
    
    totalTime += L - prevStation;
    totalTime += prevTime;
    
    cout << totalTime << endl;
    
    return 0;
}