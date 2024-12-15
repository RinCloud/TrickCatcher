#include<iostream>
#include<vector>
#include<algorithm>

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

    int currentTime = 0;
    for (int i = 0; i < N; i++) {
        currentTime += jobs[i].second;
        if (currentTime > jobs[i].first) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}