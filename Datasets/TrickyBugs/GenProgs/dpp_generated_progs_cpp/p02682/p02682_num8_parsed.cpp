#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;

    int sum = 0;
    // Choose the cards with -1s until we reach K
    int cards_with_minus = min(C, K);
    sum -= cards_with_minus;
    K -= cards_with_minus;

    // Choose the cards with 1s until we reach K
    int cards_with_ones = min(A, K);
    sum += cards_with_ones;
    K -= cards_with_ones;

    // Choose the cards with 0s until we reach K
    int cards_with_zeros = min(B, K);
    K -= cards_with_zeros;

    cout << sum << endl;

    return 0;
}
