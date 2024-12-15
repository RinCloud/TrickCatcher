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
    
    vector<int> colors(8);
    int maxColorCount = 0;
    int minColorCount = 0;
    
    for (int i = 0; i < N; i++) {
        if (ratings[i] < 400) {
            colors[0]++;
        } else if (ratings[i] < 800) {
            colors[1]++;
        } else if (ratings[i] < 1200) {
            colors[2]++;
        } else if (ratings[i] < 1600) {
            colors[3]++;
        } else if (ratings[i] < 2000) {
            colors[4]++;
        } else if (ratings[i] < 2400) {
            colors[5]++;
        } else if (ratings[i] < 2800) {
            colors[6]++;
        } else if (ratings[i] < 3200) {
            colors[7]++;
        } else {
            maxColorCount++;
        }
    }
    
    for (int i = 0; i < 8; i++) {
        if (colors[i] > 0) {
            minColorCount++;
        }
    }
    
    int minPossibleColors = (minColorCount == 0 ? 1 : minColorCount);
    int maxPossibleColors = minColorCount + maxColorCount;
    
    cout << minPossibleColors << " " << maxPossibleColors << endl;
    
    return 0;
}