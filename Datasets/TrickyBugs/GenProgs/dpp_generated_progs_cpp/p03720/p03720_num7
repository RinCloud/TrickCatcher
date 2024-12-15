#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> roadsCount(N, 0); // Initialize roads count for each city to 0

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        roadsCount[a - 1]++; // Increment roads count for city a
        roadsCount[b - 1]++; // Increment roads count for city b
    }

    for (int i = 0; i < N; i++) {
        cout << roadsCount[i] << endl;
    }

    return 0;
}