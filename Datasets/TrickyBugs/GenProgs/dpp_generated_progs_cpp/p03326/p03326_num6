#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(tuple<int, int, int> a, tuple<int, int, int> b) {
    return abs(get<0>(a)) + abs(get<1>(a)) + abs(get<2>(a)) > abs(get<0>(b)) + abs(get<1>(b)) + abs(get<2>(b));
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<tuple<int, int, int>> cakes(N);
    for (int i = 0; i < N; i++) {
        cin >> get<0>(cakes[i]) >> get<1>(cakes[i]) >> get<2>(cakes[i]);
    }

    sort(cakes.begin(), cakes.end(), compare);

    long long ans = 0;
    for (int i = 0; i < M; i++) {
        ans += abs(get<0>(cakes[i])) + abs(get<1>(cakes[i])) + abs(get<2>(cakes[i]));
    }

    cout << ans << endl;

    return 0;
}