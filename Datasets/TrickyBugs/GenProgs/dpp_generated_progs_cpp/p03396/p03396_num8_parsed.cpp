#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, L;
    cin >> N >> L;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    vector<int> t(N);
    for (int i = 0; i < N; i++) {
        cin >> t[i];
    }

    // Calculate total time for shopping and returning
    int total_time = 0;
    for (int i = 0; i < N; i++) {
        total_time += t[i] * 2;
    }

    // Calculate waiting time at each shopping center
    vector<int> wait_time(N);
    for (int i = 0; i < N; i++) {
        wait_time[i] = max(t[i], L - t[i]);
    }

    // Sort the waiting times in descending order
    sort(wait_time.begin(), wait_time.end(), greater<int>());

    // Calculate the minimum time required to finish shopping
    int min_time = total_time - wait_time[0];

    // Output the result
    cout << min_time << endl;

    return 0;
}