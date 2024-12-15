#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> L(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }

    int count = 1;  // ball starts at coordinate 0, which is a bounce
    int coordinate = 0;  // current coordinate

    for (int i = 0; i < N; i++) {
        coordinate += L[i];
        if (coordinate <= X) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}