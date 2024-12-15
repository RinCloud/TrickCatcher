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

    sort(jobs.begin(), jobs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    int current_time = 0;
    for (int i = 0; i < N; i++) {
        int job_time = jobs[i].first;
        int job_deadline = jobs[i].second;

        current_time += job_time;
        if (current_time > job_deadline) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}