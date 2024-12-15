#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> bags(N);
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        bags[i] = {x, y};
    }

    sort(bags.begin(), bags.end());

    int R_min = bags[0].first;
    int B_min = bags[0].second;
    int R_max = bags[N-1].first;
    int B_max = bags[N-1].second;

    long long min_value = (long long) (R_max - R_min) * (B_max - B_min);

    for (int i = 1; i < N; i++) {
        R_min = min(R_min, bags[i].first);
        B_min = min(B_min, bags[i].second);
        R_max = max(R_max, bags[i].first);
        B_max = max(B_max, bags[i].second);

        min_value = min(min_value, (long long) (R_max - R_min) * (B_max - B_min));
    }

    cout << min_value << endl;

    return 0;
}