#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }
    
    vector<int> stools(N);
    stools[0] = 0;
    
    for (int i = 1; i < N; i++) {
        if (heights[i] > heights[i-1]) {
            stools[i] = stools[i-1] + (heights[i] - heights[i-1]);
        } else {
            stools[i] = stools[i-1];
        }
    }
    
    int totalHeight = stools[N-1];
    
    cout << totalHeight << endl;
    
    return 0;
}