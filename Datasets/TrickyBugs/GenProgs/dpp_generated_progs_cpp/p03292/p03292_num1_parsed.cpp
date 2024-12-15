#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];

    int min_cost = INT_MAX;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != j) {
                int cost = abs(a[i] - a[j]);
                min_cost = min(min_cost, cost);
            }
        }
    }

    cout << min_cost << endl;

    return 0;
}