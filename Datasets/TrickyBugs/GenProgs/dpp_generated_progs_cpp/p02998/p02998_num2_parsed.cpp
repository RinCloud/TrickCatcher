#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Store the coordinates of all the dots
    vector<pair<int, int>> dots(N);
    for (int i = 0; i < N; i++) {
        cin >> dots[i].first >> dots[i].second;
    }

    // Create a set to check if a dot exists at a given position
    unordered_set<pair<int, int>> dotsSet;
    for (int i = 0; i < N; i++) {
        dotsSet.insert(dots[i]);
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // Check if there is a dot at position (a, b) and (c, b)
            if (dotsSet.count({dots[i].first, dots[j].second}) > 0 && dotsSet.count({dots[j].first, dots[i].second}) > 0) {
                // Check if there is no dot at position (c, d)
                if (dotsSet.count({dots[i].first, dots[i].second}) == 0 && dotsSet.count({dots[j].first, dots[j].second}) == 0) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}