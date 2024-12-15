#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, x;
    cin >> N >> x;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int happy_count = 0;
    int remaining_sweets = x;
    for (int i = 0; i < N; i++) {
        if (remaining_sweets >= a[i]) {
            happy_count++;
            remaining_sweets -= a[i];
        } else {
            break;
        }
    }

    cout << happy_count << endl;

    return 0;
}