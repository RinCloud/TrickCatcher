#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<int> b(N), l(N), u(N);
    for (int i = 0; i < N; i++) {
        cin >> b[i] >> l[i] >> u[i];
    }
    
    long long study_hours = 0;
    while (true) {
        long long A = 0, B = 0;
        for (int i = 0; i < N; i++) {
            A += l[i] * max(0, X - b[i]);
            B += u[i] * max(0, b[i] - X);
        }
        
        if (A >= B) {
            break;
        }
        
        int diff = B - A;
        int max_diff = -1, max_diff_index = -1;
        
        for (int i = 0; i < N; i++) {
            int curr_diff = u[i] * max(0, b[i] + 1 - X) - l[i] * max(0, X - b[i] - 1);
            if (curr_diff > max_diff) {
                max_diff = curr_diff;
                max_diff_index = i;
            }
        }
        
        if (max_diff <= 0) {
            break;
        }
        
        b[max_diff_index]++;
        study_hours++;
    }
    
    cout << study_hours << endl;
    
    return 0;
}