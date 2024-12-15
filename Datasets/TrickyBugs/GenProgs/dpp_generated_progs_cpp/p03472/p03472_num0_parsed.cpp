#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int minAttacks = 1e9;
    for (int thrown = 0; thrown <= n; thrown++) {
        int damage = thrown;
        int remaining = h - damage;
        int attacks = thrown;

        for (int wielded = 0; wielded < n; wielded++) {
            if (b[wielded] >= a[wielded] && remaining > 0) {
                int additional = (remaining + b[wielded] - 1) / b[wielded];
                attacks += additional;
                damage += additional * a[wielded];
                remaining -= additional * b[wielded];
            } else {
                break;
            }
        }

        if (damage >= h) {
            minAttacks = min(minAttacks, attacks);
        }
    }

    cout << minAttacks << endl;

    return 0;
}