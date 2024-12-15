#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int A, B;
        cin >> A >> B;
        long long int max_participants = max(A, B) - 1;
        long long int ans = max_participants * max_participants;
        ans += abs(A - B);
        cout << ans << endl;
    }
    return 0;
}