#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int max_money = 0;
    for (int x = 1; x <= N; x++) {
        int money = 0;
        for (int i = x; i <= N; i += x) {
            money += a[i - 1];
        }
        max_money = max(max_money, money);
    }

    cout << max_money << endl;

    return 0;
}