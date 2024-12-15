#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;

    long long ans = 0;

    // calculate cost for 0.25-liter bottle
    long long costQ = Q * N;

    // calculate cost for 0.5-liter bottle
    long long costH = H * (N / 2);

    // calculate cost for 1-liter bottle
    long long costS = S * (N / 1);

    // calculate cost for 2-liter bottle
    long long costD = D * (N / 2);

    // try to minimize the cost by using the cheapest bottles
    ans = min(min(costQ, min(costH, costS)), costD);

    // check if there are any remaining liters to buy
    int rem = N % 2;

    // if there are remaining liters, add the cost of the cheapest bottle
    if (rem > 0) {
        ans += min(costQ * rem, min(costH * rem, costS * rem));
    }

    cout << ans << endl;

    return 0;
}