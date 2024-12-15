#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> bags(N);
    for (int i = 0; i < N; i++) {
        cin >> bags[i].first >> bags[i].second;
    }

    sort(bags.begin(), bags.end());

    int red_min = bags[0].first;
    int red_max = bags[N - 1].first;
    int blue_min = bags[0].second;
    int blue_max = bags[N - 1].second;

    long long result = static_cast<long long>(red_max - red_min) * static_cast<long long>(blue_max - blue_min);
    cout << result << endl;

    return 0;
}