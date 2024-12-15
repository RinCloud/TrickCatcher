#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
 
    sort(A.begin(), A.end());
 
    int minChars = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] <= minChars + 1) {
            minChars = A[i];
        } else {
            break;
        }
    }
 
    cout << minChars << endl;
 
    return 0;
}