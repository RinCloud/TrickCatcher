#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int cost = 0;
    cost = min(A, min(B, C));
    cost = max(A, max(B, C)) - cost;
    cout << cost << endl;
    return 0;
}
