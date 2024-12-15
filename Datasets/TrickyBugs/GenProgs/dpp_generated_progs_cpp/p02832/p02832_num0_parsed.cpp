#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    vector<int> index(N, -1); // stores the index of each number
    vector<int> remaining; // stores the numbers that need to be moved to the right
    int cnt = 0; // stores the number of bricks that need to be broken

    for (int i = 0; i < N; i++) {
        int num = a[i];
        if (num > N-1) {
            cout << -1 << endl;
            return 0;
        }

        if (num <= N-1 && index[num] == -1) {
            index[num] = i;
        } else {
            remaining.push_back(num);
        }
    }

    int j = 1; // starting position for the remaining numbers
    for (int i = 0; i < remaining.size(); i++) {
        int num = remaining[i];
        int idx = index[j];
        if (idx == -1) {
            cout << -1 << endl;
            return 0;
        }

        if (idx >= j) {
            cnt++;
        } else {
            cnt += j - idx;
            j = idx + 1;
        }

        j++;
    }

    cout << cnt << endl;

    return 0;
}
