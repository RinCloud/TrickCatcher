#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int minimum_cost = min({abs(B - A), abs(C - A), abs(C - B)});

    cout << minimum_cost << endl;

    return 0;
}