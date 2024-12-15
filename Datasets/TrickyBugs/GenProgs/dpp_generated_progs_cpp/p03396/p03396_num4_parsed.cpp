#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, L;
    cin >> N >> L;

    vector<int> x(N);
    vector<int> t(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> t[i];
    }

    long long total_time = 0;

    for (int i = 0; i < N; i++) {
        int forward_time = x[i];
        int backward_time = L - x[i];

        int current_time = max(forward_time, backward_time);

        total_time += current_time + t[i];
    }

    total_time += L;

    cout << total_time << endl;

    return 0;
}
