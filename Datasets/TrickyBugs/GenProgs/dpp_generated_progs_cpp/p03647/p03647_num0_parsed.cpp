#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> islands(N+1, 0);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        islands[a]++;
        islands[b]++;
    }

    for (int i = 2; i <= N - 1; i++) {
        if (islands[i] == 2) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
