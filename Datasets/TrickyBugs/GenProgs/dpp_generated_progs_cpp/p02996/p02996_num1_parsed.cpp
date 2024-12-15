#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canCompleteAllJobs(vector<pair<int, int>> jobs) {
    sort(jobs.begin(), jobs.end(), [](pair<int, int>& a, pair<int, int>& b){
        return a.second < b.second;
    });
    
    int currentTime = 0;
    for (int i = 0; i < jobs.size(); i++) {
        if (currentTime + jobs[i].first <= jobs[i].second) {
            currentTime += jobs[i].first;
        } else {
            return false;
        }
    }
    
    return true;
}

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> jobs(N);
    for (int i = 0; i < N; i++) {
        cin >> jobs[i].first >> jobs[i].second;
    }
    
    if (canCompleteAllJobs(jobs)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}