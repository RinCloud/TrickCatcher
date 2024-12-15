#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> m(N);
    for (int i = 0; i < N; i++) {
        cin >> m[i];
    }

    int min_moto = *min_element(m.begin(), m.end());
    int total_moto = accumulate(m.begin(), m.end(), 0);

    int doughnuts = (X - total_moto) / min_moto + N;

    cout << doughnuts << endl;

    return 0;
}