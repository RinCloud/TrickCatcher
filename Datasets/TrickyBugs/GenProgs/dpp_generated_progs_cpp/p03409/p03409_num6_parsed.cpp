#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> red(N);
    vector<pair<int, int>> blue(N);

    for (int i = 0; i < N; i++) {
        cin >> red[i].first >> red[i].second;
    }
    for (int i = 0; i < N; i++) {
        cin >> blue[i].first >> blue[i].second;
    }

    sort(red.begin(), red.end());
    sort(blue.begin(), blue.end());

    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (red[i].first < blue[j].first && red[i].second < blue[j].second) {
                count++;
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}