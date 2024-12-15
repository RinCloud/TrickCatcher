#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> ratings(N);
    for (int i = 0; i < N; i++) {
        cin >> ratings[i];
    }
    
    vector<bool> colors(8, false);
    int otherColorCount = 0;
    
    for (int i = 0; i < N; i++) {
        if (ratings[i] >= 1 && ratings[i] <= 399) colors[0] = true;
        else if (ratings[i] >= 400 && ratings[i] <= 799) colors[1] = true;
        else if (ratings[i] >= 800 && ratings[i] <= 1199) colors[2] = true;
        else if (ratings[i] >= 1200 && ratings[i] <= 1599) colors[3] = true;
        else if (ratings[i] >= 1600 && ratings[i] <= 1999) colors[4] = true;
        else if (ratings[i] >= 2000 && ratings[i] <= 2399) colors[5] = true;
        else if (ratings[i] >= 2400 && ratings[i] <= 2799) colors[6] = true;
        else if (ratings[i] >= 2800 && ratings[i] <= 3199) colors[7] = true;
        else otherColorCount++;
    }
    
    int minColors = 0;
    for (int i = 0; i < 8; i++) {
        if (colors[i]) minColors++;
    }
    
    int maxColors = minColors;
    if (otherColorCount > 0) {
        maxColors += otherColorCount;
    } else {
        maxColors -= 1; // Subtract one color for restricting to possible ratings.
    }
    
    cout << minColors << " " << maxColors << endl;
    
    return 0;
}