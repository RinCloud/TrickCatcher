#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    // Calculate the maximum number of Scc groups
    long long maxGroups = min(N, M / 2);

    cout << maxGroups << endl;

    return 0;
}