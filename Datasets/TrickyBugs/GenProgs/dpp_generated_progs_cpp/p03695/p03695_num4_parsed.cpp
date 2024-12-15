#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> ratings(N);
    for (int i = 0; i < N; i++) {
        cin >> ratings[i];
    }
    
    set<string> colors = {"gray", "brown", "green", "cyan", "blue", "yellow", "orange", "red"};
    
    int minColors = 0;
    int maxColors = 0;
    
    vector<int> counts(9, 0);
    for (int i = 0; i < N; i++) {
        int colorIdx = (ratings[i] - 1) / 400;
        
        if (colorIdx <= 7) {
            counts[colorIdx] = 1;
        } else {
            counts[8]++;
        }
    }
    
    for (int i = 0; i <= 7; i++) {
        minColors += counts[i];
    }
    
    maxColors = minColors + counts[8];
    
    if (minColors == 0) {
        minColors = 1;
    }
    
    cout << minColors << " " << maxColors << endl;

    return 0;
}