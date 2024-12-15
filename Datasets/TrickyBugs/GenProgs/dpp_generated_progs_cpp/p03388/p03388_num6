#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    while (Q--) {
        int A, B;
        cin >> A >> B;

        long long maxParticipants = min(A-1, B-1) + min(B, A-1) * min(A, B-1);

        cout << maxParticipants << endl;
    }

    return 0;
}