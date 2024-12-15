#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> d(N);

    for (int i = 0; i < N; i++) {
        cin >> d[i];
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            sum += d[i] * d[j];
        }
    }

    cout << sum << endl;

    return 0;
}