#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int dfs(vector<int>& bamboos, int a, int b, int c, int curA, int curB, int curC, int curCost) {
    if (curA == a && curB == b && curC == c) {
        return curCost;
    }
    if (curA < a && (curA + 1 <= a || curB + 1 <= b || curC + 1 <= c)) {
        int idx = -1;
        int minLen = INT_MAX;
        for (int i = 0; i < bamboos.size(); i++) {
            if (bamboos[i] > curA) {
                if (bamboos[i] - curA < minLen) {
                    idx = i;
                    minLen = bamboos[i] - curA;
                }
            }
        }
        if (idx != -1) {
            int newCost = dfs(bamboos, a, b, c, curA + 1, curB, curC, curCost + 1);
            int oriLen = bamboos[idx];
            bamboos[idx] = curA + 1;
            int res = dfs(bamboos, a, b, c, curA + 1, curB, curC, curCost + 1);
            bamboos[idx] = oriLen;
            return min(newCost, res);
        }
    }
    if (curB < b && (curB + 1 <= b || curC + 1 <= c)) {
        int idx = -1;
        int minLen = INT_MAX;
        for (int i = 0; i < bamboos.size(); i++) {
            if (bamboos[i] > curB) {
                if (bamboos[i] - curB < minLen) {
                    idx = i;
                    minLen = bamboos[i] - curB;
                }
            }
        }
        if (idx != -1) {
            int newCost = dfs(bamboos, a, b, c, curA, curB + 1, curC, curCost + 1);
            int oriLen = bamboos[idx];
            bamboos[idx] = curB + 1;
            int res = dfs(bamboos, a, b, c, curA, curB + 1, curC, curCost + 1);
            bamboos[idx] = oriLen;
            return min(newCost, res);
        }
    }
    if (curC < c) {
        int idx1 = -1;
        int minLen1 = INT_MAX;
        int idx2 = -1;
        int minLen2 = INT_MAX;
        for (int i = 0; i < bamboos.size(); i++) {
            if (bamboos[i] > curC) {
                if (bamboos[i] - curC < minLen1) {
                    idx2 = idx1;
                    minLen2 = minLen1;
                    idx1 = i;
                    minLen1 = bamboos[i] - curC;
                } else if (bamboos[i] - curC < minLen2) {
                    idx2 = i;
                    minLen2 = bamboos[i] - curC;
                }
            }
        }
        if (idx1 != -1 && idx2 != -1) {
            int newCost = dfs(bamboos, a, b, c, curA, curB, curC + 1, curCost + 1);
            int oriLen1 = bamboos[idx1];
            int oriLen2 = bamboos[idx2];
            bamboos[idx1] = curC + 1;
            bamboos[idx2] = curC + 1;
            int res = dfs(bamboos, a, b, c, curA, curB, curC + 1, curCost + 1);
            bamboos[idx1] = oriLen1;
            bamboos[idx2] = oriLen2;
            return min(newCost, res);
        }
    }
    int idx = -1;
    int minLen = INT_MAX;
    for (int i = 0; i < bamboos.size(); i++) {
        if (bamboos[i] > curC + 1) {
            if (bamboos[i] - curC - 1 < minLen) {
                idx = i;
                minLen = bamboos[i] - curC - 1;
            }
        }
    }
    if (idx != -1) {
        int newCost = dfs(bamboos, a, b, c, curA, curB, curC + 1, curCost + 10);
        int oriLen = bamboos[idx];
        bamboos[idx] = curC + 1;
        int res = dfs(bamboos, a, b, c, curA, curB, curC + 1, curCost + 10);
        bamboos[idx] = oriLen;
        return min(newCost, res);
    }
    return INT_MAX;
}

int main() {
    int N, A, B, C;
    cin >> N >> A >> B >> C;
    vector<int> bamboos(N);
    for (int i = 0; i < N; i++) {
        cin >> bamboos[i];
    }
    int res = dfs(bamboos, A, B, C, 0, 0, 0, 0);
    cout << res << endl;
    return 0;
}