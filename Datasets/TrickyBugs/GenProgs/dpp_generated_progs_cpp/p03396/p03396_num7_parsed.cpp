#include <iostream>
#include <vector>
#include <algorithm>

typedef long long int ll;

using namespace std;

int main() {
    int N, L;
    cin >> N >> L;

    vector<ll> shopping_centers(N);
    for (int i = 0; i < N; i++) {
        cin >> shopping_centers[i];
    }

    vector<ll> shopping_times(N);
    for (int i = 0; i < N; i++) {
        cin >> shopping_times[i];
    }

    ll total_time = 0;

    // Calculate the time taken to reach the last shopping center from Yui's house
    total_time += shopping_centers[N - 1];

    // Calculate the time taken to return home from the last shopping center
    total_time += L - shopping_centers[N - 1];

    // Sort the shopping centers in ascending order
    sort(shopping_centers.begin(), shopping_centers.end());

    // Calculate the time taken to travel between consecutive shopping centers
    for (int i = 0; i < N - 1; i++) {
        total_time += shopping_centers[i + 1] - shopping_centers[i];
    }

    // Calculate the total time spent shopping
    for (int i = 0; i < N; i++) {
        total_time += shopping_times[i];
    }

    cout << total_time << endl;

    return 0;
}