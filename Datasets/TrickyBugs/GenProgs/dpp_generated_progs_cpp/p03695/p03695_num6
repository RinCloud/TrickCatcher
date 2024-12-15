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
    
    vector<bool> colors(8);
    int maxCount = 0;
    int grayCount = 0;
    for (int i = 0; i < N; i++) {
        int rating = ratings[i];
        if (rating >= 1 && rating <= 399) {
            colors[0] = true;
            grayCount++;
        } else if (rating >= 400 && rating <= 799) {
            colors[1] = true;
        } else if (rating >= 800 && rating <= 1199) {
            colors[2] = true;
        } else if (rating >= 1200 && rating <= 1599) {
            colors[3] = true;
        } else if (rating >= 1600 && rating <= 1999) {
            colors[4] = true;
        } else if (rating >= 2000 && rating <= 2399) {
            colors[5] = true;
        } else if (rating >= 2400 && rating <= 2799) {
            colors[6] = true;
        } else if (rating >= 2800 && rating <= 3199) {
            colors[7] = true;
        } else {
            maxCount++;
        }
    }
    
    int minCount = 0;
    for (int i = 0; i < 8; i++) {
        if (colors[i]) {
            minCount++;
        }
    }

    if (minCount == 0 && maxCount > 0) {
        minCount = 1;
    }

    cout << minCount << " " << minCount + maxCount << endl;

    return 0;
}