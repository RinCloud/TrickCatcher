#include <iostream>
#include <algorithm>
#include <limits>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> bags(N);
    for (int i = 0; i < N; i++) {
        cin >> bags[i].first >> bags[i].second;
    }

    sort(bags.begin(), bags.end());

    int R_max = numeric_limits<int>::min();
    int R_min = numeric_limits<int>::max();
    int B_max = numeric_limits<int>::min();
    int B_min = numeric_limits<int>::max();

    for (int i = 0; i < N; i++) {
        R_max = max(R_max, bags[i].first);
        R_min = min(R_min, bags[i].first);
        B_max = max(B_max, bags[i].second);
        B_min = min(B_min, bags[i].second);
    }

    long long int result = static_cast<long long int>(R_max - R_min) * static_cast<long long int>(B_max - B_min);
    cout << result << endl;

    return 0;
}
