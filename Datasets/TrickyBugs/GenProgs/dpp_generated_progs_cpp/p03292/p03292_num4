#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A[3];
    for (int i = 0; i < 3; i++) {
        cin >> A[i];
    }
    
    sort(A, A + 3);
    
    int cost = 0;
    cost += abs(A[1] - A[0]);
    cost += abs(A[2] - A[1]);
    
    cout << cost << endl;

    return 0;
}