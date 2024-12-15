#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> bags(N);
    for (int i = 0; i < N; i++) {
        cin >> bags[i].first >> bags[i].second;
    }

    sort(bags.begin(), bags.end());

    int R_min = bags[N-1].first;
    int R_max = INT_MIN;
    int B_min = bags[0].second;
    int B_max = INT_MIN;

    for (int i = 0; i < N; i++) {
        R_max = max(R_max, bags[i].first);
        B_max = max(B_max, bags[i].second);
    }

    long long int min_value = static_cast<long long int>(R_max - R_min) * (B_max - B_min);

    cout << min_value << endl;

    return 0;
}