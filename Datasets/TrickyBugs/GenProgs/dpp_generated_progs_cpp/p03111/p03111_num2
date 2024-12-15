#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int N, A, B, C;
vector<int> lengths;
vector<int> mpRequired;

void dfs(int index, int mp, int a, int b, int c) {
    if (index == N) {
        if (a != A || b != B || c != C || (a == A && b == B && c == C && mp == 0))
            return;
        mpRequired.push_back(mp);
        return;
    }
    dfs(index + 1, mp, a, b, c);
    if (a + lengths[index] <= A)
        dfs(index + 1, mp + 10, a + lengths[index], b, c);
    if (b + lengths[index] <= B)
        dfs(index + 1, mp + 10, a, b + lengths[index], c);
    if (c + lengths[index] <= C)
        dfs(index + 1, mp + 10, a, b, c + lengths[index]);
    if (a + lengths[index] <= A && b + lengths[index] <= B)
        dfs(index + 1, mp + 10, a + lengths[index], b + lengths[index], c);
    if (b + lengths[index] <= B && c + lengths[index] <= C)
        dfs(index + 1, mp + 10, a, b + lengths[index], c + lengths[index]);
    if (a + lengths[index] <= A && c + lengths[index] <= C)
        dfs(index + 1, mp + 10, a + lengths[index], b, c + lengths[index]);
    if (a + lengths[index] + b + lengths[index] <= A && c + lengths[index] <= C)
        dfs(index + 1, mp + 20, a + lengths[index] + b + lengths[index], 0, c + lengths[index]);
    if (a + lengths[index] + b + lengths[index] <= B && c + lengths[index] <= C)
        dfs(index + 1, mp + 20, 0, a + lengths[index] + b + lengths[index], c + lengths[index]);
    if (a + lengths[index] <= A && b + lengths[index] + c + lengths[index] <= B)
        dfs(index + 1, mp + 20, a + lengths[index], 0, b + lengths[index] + c + lengths[index]);
    if (a + lengths[index] <= A && b + lengths[index] + c + lengths[index] <= C)
        dfs(index + 1, mp + 20, a + lengths[index], b + lengths[index] + c + lengths[index], 0);
    if (a + lengths[index] + b + lengths[index] + c + lengths[index] <= A)
        dfs(index + 1, mp + 30, a + lengths[index] + b + lengths[index] + c + lengths[index], 0, 0);
    if (a + lengths[index] + b + lengths[index] + c + lengths[index] <= B)
        dfs(index + 1, mp + 30, 0, a + lengths[index] + b + lengths[index] + c + lengths[index], 0);
    if (a + lengths[index] + b + lengths[index] + c + lengths[index] <= C)
        dfs(index + 1, mp + 30, 0, 0, a + lengths[index] + b + lengths[index] + c + lengths[index]);
}

int main() {
    cin >> N >> A >> B >> C;
    lengths.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> lengths[i];
    }
    dfs(0, 0, 0, 0, 0);
    sort(mpRequired.begin(), mpRequired.end());
    cout << mpRequired[0] << endl;
    return 0;
}