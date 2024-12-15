#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> b(N);
    vector<int> l(N);
    vector<int> u(N);

    for (int i = 0; i < N; i++) {
        cin >> b[i] >> l[i] >> u[i];
    }

    long long sumA = 0;
    long long sumB = 0;

    for (int i = 0; i < N; i++) {
        sumA += (long long)l[i] * b[i];
        sumB += (long long)u[i] * b[i];
    }

    if (sumB < sumA) {
        cout << "0" << endl;
        return 0;
    }

    long long diff = sumB - sumA;
    long long hours = diff / X;
    if (diff % X != 0) {
        hours++;
    }

    cout << hours << endl;

    return 0;
}