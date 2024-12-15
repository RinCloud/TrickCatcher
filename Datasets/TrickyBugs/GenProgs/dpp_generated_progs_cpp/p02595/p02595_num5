#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    
    int count = 0;
    for (int i = 0; i < N; i++) {
        int X, Y;
        cin >> X >> Y;
        
        double distance = sqrt(X * X + Y * Y);
        if (distance <= D) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}