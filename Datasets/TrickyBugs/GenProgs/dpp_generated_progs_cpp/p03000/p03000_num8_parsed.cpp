#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<int> L(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }
    
    int count = 1; // Initialize count to account for first bounce at D_1 = 0
    int coordinate = 0;
    
    for (int i = 0; i < N; i++) {
        coordinate += L[i]; // Update coordinate
        
        if (coordinate <= X) {
            count++; // Increment count if coordinate is at most X
        }
    }
    
    cout << count << endl;
    
    return 0;
}