#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> dots(N);
    for (int i = 0; i < N; i++) {
        cin >> dots[i].first >> dots[i].second;
    }

    unordered_set<int> xSet, ySet;
    for (int i = 0; i < N; i++) {
        xSet.insert(dots[i].first);
        ySet.insert(dots[i].second);
    }

    int ans = 0;
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            int diffX = dots[j].first - dots[i].first;
            int diffY = dots[j].second - dots[i].second;
            int nextX1 = dots[j].first + diffY;
            int nextY1 = dots[j].second - diffX;
            int nextX2 = dots[i].first + diffY;
            int nextY2 = dots[i].second - diffX;
            int nextX3 = dots[i].first - diffY;
            int nextY3 = dots[i].second + diffX;
            int nextX4 = dots[j].first - diffY;
            int nextY4 = dots[j].second + diffX;

            int count = 0;
            count += xSet.count(nextX1) + ySet.count(nextY1);
            count += xSet.count(nextX2) + ySet.count(nextY2);
            count += xSet.count(nextX3) + ySet.count(nextY3);
            count += xSet.count(nextX4) + ySet.count(nextY4);

            if (count == 6 || count == 8) {
                if (diffX*diffX + diffY*diffY > ans) {
                    ans = diffX*diffX + diffY*diffY;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}