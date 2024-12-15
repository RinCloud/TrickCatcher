#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Town {
    int x, y;
};

bool cmpX(Town a, Town b) {
    return a.x < b.x;
}

bool cmpY(Town a, Town b) {
    return a.y < b.y;
}

int main() {
    int N;
    cin >> N;

    vector<Town> towns(N);
    for (int i = 0; i < N; i++) {
        cin >> towns[i].x >> towns[i].y;
    }

    sort(towns.begin(), towns.end(), cmpX);

    int minCostX = towns[N - 1].x - towns[0].x;

    sort(towns.begin(), towns.end(), cmpY);

    int minCostY = towns[N - 1].y - towns[0].y;

    int minCost = max(minCostX, minCostY);

    cout << minCost << endl;

    return 0;
}