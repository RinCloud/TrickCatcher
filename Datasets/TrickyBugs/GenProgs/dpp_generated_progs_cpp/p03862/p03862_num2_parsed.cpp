#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, x;
    cin >> N >> x;
    
    vector<int> boxes(N);
    for(int i=0; i<N; i++) {
        cin >> boxes[i];
    }
    
    long long operations = 0;
    for(int i=1; i<N; i++) {
        int maxCandies = max(boxes[i], boxes[i-1]);
        int excessCandies = maxCandies - x;
        if(boxes[i] > excessCandies) {
            operations += boxes[i] - excessCandies;
            boxes[i] = excessCandies;
        }
    }
    
    cout << operations << endl;
    
    return 0;
}