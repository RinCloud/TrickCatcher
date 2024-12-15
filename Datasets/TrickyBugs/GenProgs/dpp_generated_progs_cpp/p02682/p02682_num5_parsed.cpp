#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;

    int sum = 0;
    int a_cards = min(A, K);
    sum += a_cards;
    K -= a_cards;

    int b_cards = min(B, K);
    K -= b_cards;

    int c_cards = min(C, K);
    sum -= c_cards;

    cout << sum << endl;

    return 0;
}