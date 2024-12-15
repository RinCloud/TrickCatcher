#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    // Read input
    int N, M;
    cin >> N >> M;

    // Create a set to store the connections
    unordered_set<int> connected;

    // Read the connections and store them in the set
    int a, b;
    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        connected.insert(a);
        connected.insert(b);
    }

    // Check if it is possible to reach Island N
    if (connected.count(1) && connected.count(N)) {
        cout << "POSSIBLE" << endl;
    } else {
        // Check for a pair of islands (a, b) such that there is a connection from 1 to a and from b to N
        for (int i = 0; i < M; i++) {
            cin >> a >> b;
            if (connected.count(a) && connected.count(b)) {
                cout << "POSSIBLE" << endl;
                return 0;
            }
        }
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}