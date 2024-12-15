#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int size = pow(2, N);
    vector<int> A(size);
    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }
    
    vector<int> or_max(size-1);
    for (int i = 0; i < size-1; i++) {
        int max_val = 0;
        for (int j = i+1; j < size; j++) {
            if ((i | j) <= i+1) {
                max_val = max(max_val, A[i] + A[j]);
            }
        }
        or_max[i] = max_val;
        cout << or_max[i] << endl;
    }

    return 0;
}