#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> cost(N, 0);
    vector<bool> known(N, false);

    for (int i = 0; i < M; i++) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        X--;
        Y--;

        if (!known[X] && !known[Y]) {
            cost[X] = Z % 2;
            cost[Y] = Z % 2;
        } else if (!known[X]) {
            cost[X] = cost[Y] ^ (Z % 2);
        } else if (!known[Y]) {
            cost[Y] = cost[X] ^ (Z % 2);
        }
        known[X] = true;
        known[Y] = true;
    }

    int count = count(cost.begin(), cost.end(), 0);

    cout << count << endl;

    return 0;
}