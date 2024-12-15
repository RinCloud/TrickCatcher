#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int totalTime = 0;
    int maxSubmissions = pow(2, M);
    int numCases = pow(2, N);

    for (int i = 0; i < maxSubmissions-1; i++) {
        totalTime += 1900 * (i + 1);
    }

    totalTime += numCases * 100 * (maxSubmissions);

    cout << totalTime << endl;

    return 0;
}