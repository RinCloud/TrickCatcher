#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> red_boxes(N+1, 0); // Vector to store the number of red balls in each box
    red_boxes[1] = 1; // Box 1 already contains a red ball
    
    for(int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        
        // If the picked ball is red, the destination box becomes red
        if(red_boxes[x] == 1) {
            red_boxes[y] = 1;
        }
        
        // Decrement the number of red balls from the picked box
        red_boxes[x]--;
        
        // Increment the number of red balls to the destination box
        red_boxes[y]++;
        
        // If the picked box becomes empty, remove the red ball from it
        if(red_boxes[x] == 0) {
            red_boxes[x] = 0;
        }
    }
    
    // Count the number of boxes that may contain the red ball
    int count = 0;
    for(int i = 1; i <= N; i++) {
        if(red_boxes[i] > 0) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}