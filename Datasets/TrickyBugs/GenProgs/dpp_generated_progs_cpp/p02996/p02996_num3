#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    // Sort the jobs by their deadlines
    sort(B.begin(), B.end());

    long long total_time = 0;
    for (int i = 0; i < N; i++) {
        total_time += A[i];
        if (total_time > B[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}