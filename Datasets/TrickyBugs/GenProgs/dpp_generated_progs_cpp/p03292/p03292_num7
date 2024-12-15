#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A[3];
    for(int i=0; i<3; i++) {
        cin >> A[i];
    }
    sort(A, A+3);
    int min_cost = abs(A[1] - A[0]) + abs(A[2] - A[1]);

    cout << min_cost << endl;

    return 0;
}