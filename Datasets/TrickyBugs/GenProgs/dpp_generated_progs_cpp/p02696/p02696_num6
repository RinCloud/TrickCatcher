#include <iostream>
using namespace std;

int main() {
    int A, B, N;
    cin >> A >> B >> N;
    
    int max_val = 0;
    for (int x = 0; x <= N; x++) {
        int val = (A * x) / B - A * (x / B);
        if (val > max_val) {
            max_val = val;
        }
    }
    
    cout << max_val << endl;
    
    return 0;
}