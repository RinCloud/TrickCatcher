#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int N, A, B, C;
vector<int> lengths;
int min_mp = INT_MAX;

void dfs(int index, int a, int b, int c, int mp) {
    if (index == N) {
        if (a != 0 && b != 0 && c != 0) {
            int cost = abs(A - a) + abs(B - b) + abs(C - c);
            if (cost + mp < min_mp) {
                min_mp = cost + mp;
            }
        }
        return;
    }

    dfs(index + 1, a, b, c, mp);  // Skip the current bamboo

    dfs(index + 1, a + lengths[index], b, c, mp + 10);  // Use Extension Magic

    if (a != 0) {
        dfs(index + 1, a - 1, b, c, mp + 1);  // Use Shortening Magic on bamboo A
    }

    if (b != 0) {
        dfs(index + 1, a, b - 1, c, mp + 1);  // Use Shortening Magic on bamboo B
    }

    if (c != 0) {
        dfs(index + 1, a, b, c - 1, mp + 1);  // Use Shortening Magic on bamboo C
    }
}

int main() {
    cin >> N >> A >> B >> C;

    for (int i = 0; i < N; i++) {
        int length;
        cin >> length;
        lengths.push_back(length);
    }

    dfs(0, 0, 0, 0, 0);

    cout << min_mp << endl;

    return 0;
}