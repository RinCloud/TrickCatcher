#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> deliciousness(N);
    for (int i = 0; i < N; i++) {
        cin >> deliciousness[i];
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            sum += deliciousness[i] * deliciousness[j];
        }
    }

    cout << sum << endl;

    return 0;
}