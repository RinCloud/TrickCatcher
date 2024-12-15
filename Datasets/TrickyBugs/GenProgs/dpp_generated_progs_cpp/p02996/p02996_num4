#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> jobs;
    
    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        jobs.push_back(make_pair(B, A));
    }
    
    sort(jobs.begin(), jobs.end());
    
    long long time = 0;
    for (int i = 0; i < N; i++) {
        if (time > jobs[i].first) {
            cout << "No" << endl;
            return 0;
        }
        time += jobs[i].second;
    }
    
    cout << "Yes" << endl;
    
    return 0;
}