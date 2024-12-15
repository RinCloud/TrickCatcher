#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> houses(N);
    for (int i = 0; i < N; i++) {
        cin >> houses[i];
    }

    sort(houses.begin(), houses.end());

    int minDistance = houses.back() - houses.front();
    cout << minDistance << endl;

    return 0;
}