#include <iostream>
#include <unordered_set>

typedef long long ll;

int main() {
    int N, X, D;
    std::cin >> N >> X >> D;

    if (D == 0) {
        if (X == 0) {
            std::cout << "1" << std::endl;
        } else {
            std::cout << N + 1 << std::endl;
        }
        return 0;
    }

    std::unordered_set<ll> nums;
    std::unordered_set<ll> neg_nums;

    for (int i = 0; i <= N; i++) {
        ll a1 = (ll)X * i;
        ll d1 = (ll)D * i;
        if (D < 0) {
            a1 = (ll)X * (N - i);
            d1 = (ll)D * (N - i);
        }

        ll b = 0;
        ll a = a1;
        if (a1 >= 0) {
            b = a1 % D;
        } else {
            a = a1 - ((abs(a1) - 1) % abs(D) + 1);
            b = (a - a1) / D;
        }

        if (D == 0 && a1 == 0) {
            nums.insert(0);
            continue;
        }

        if (abs(D) == 1) {
            nums.insert(a1);
            if (D == -1 && i != 0) {
                neg_nums.insert(-a1);
            }
            continue;
        }

        ll n1 = d1 * (a - 1) / 2;
        ll n2 = d1 * b;

        if (D > 0) {
            if (D % 2 == 0 && b % 2 == 0) {
                nums.insert(n1 + n2);
            } else {
                if (b % 2 != 0) {
                    nums.insert(n1 + n2 + a);
                    nums.insert(n1 + n2 + a + D);
                } else {
                    nums.insert(n1 + n2 + (a - b * D));
                    nums.insert(n1 + n2 + (a - (b + 1) * D));
                }
            }
        } else {
            if (i != 0) {
                if (a >= b * D) {
                    nums.insert(n1 + n2 + a);
                } else {
                    nums.insert(n1 + n2 + (b * D));
                    nums.insert(n1 + n2 + ((b + 1) * D));
                }
            }
        }
    }

    std::cout << nums.size() + neg_nums.size() << std::endl;

    return 0;
}