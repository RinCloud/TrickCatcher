#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;

    int cards[] = {A, B, C};
    sort(cards, cards+3);

    int sum = min(cards[0], K);
    K -= min(cards[0], K);
    sum += min(cards[1], K);
    K -= min(cards[1], K);
    sum += min(cards[2], K);

    cout << sum << endl;
    
    return 0;
}