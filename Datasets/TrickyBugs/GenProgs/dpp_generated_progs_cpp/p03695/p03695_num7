#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> ratings(N);
    for (int i = 0; i < N; i++) {
        cin >> ratings[i];
    }

    vector<int> colors(8); // to store count of each color
    int maxColor = 0; // to store maximum number of colors
    int minColor = 0; // to store minimum number of colors

    for (int i = 0; i < N; i++) {
        if (ratings[i] >= 1 && ratings[i] <= 399) {
            colors[0]++;
        } else if (ratings[i] >= 400 && ratings[i] <= 799) {
            colors[1]++;
        } else if (ratings[i] >= 800 && ratings[i] <= 1199) {
            colors[2]++;
        } else if (ratings[i] >= 1200 && ratings[i] <= 1599) {
            colors[3]++;
        } else if (ratings[i] >= 1600 && ratings[i] <= 1999) {
            colors[4]++;
        } else if (ratings[i] >= 2000 && ratings[i] <= 2399) {
            colors[5]++;
        } else if (ratings[i] >= 2400 && ratings[i] <= 2799) {
            colors[6]++;
        } else if (ratings[i] >= 2800 && ratings[i] <= 3199) {
            colors[7]++;
        } else {
            maxColor++;
        }
    }

    minColor = count_if(colors.begin(), colors.end(), [](int x){ return x > 0; });
    maxColor += minColor;

    cout << minColor << " " << maxColor << endl;

    return 0;
}