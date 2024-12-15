#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> jobs(N);
    for (int i = 0; i < N; i++) {
        cin >> jobs[i].first >> jobs[i].second;
    }
    
    sort(jobs.begin(), jobs.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return a.second < b.second;
    });
    
    int currTime = 0;
    for (int i = 0; i < N; i++) {
        currTime += jobs[i].first;
        if (currTime > jobs[i].second) {
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    return 0;
}