#include <iostream>
#include <vector>
using namespace std;

vector<int> calculateSeq(int k, int n) {
    vector<int> sequence;
    if (k == 1) {
        for (int i = 1; i <= (n+1)/2; i++)
            sequence.push_back(1);
        return sequence;
    }

    vector<long long> count(n + 1, 0);
    count[1] = k;
    for (int i = 2; i <= n; i++) {
        count[i] = count[i-1] * (k-1) + 1;
    }

    int x = (count[n] + 1) / 2;
    int p = 0;

    for (int i = 0; i < n; i++) {
        int j = (x - p + count[n-i-1] - 1) / count[n-i-1];
        sequence.push_back(j);
        p += (j - 1) * count[n-i-1];
    }
    return sequence;
}

int main() {
    int k, n;
    cin >> k >> n;

    vector<int> sequence = calculateSeq(k, n);

    for (int i = 0; i < n; i++) {
        cout << sequence[i] << " ";
    }
    cout << endl;

    return 0;
}
