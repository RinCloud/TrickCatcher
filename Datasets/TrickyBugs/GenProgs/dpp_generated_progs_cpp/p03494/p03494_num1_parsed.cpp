#include <iostream>
 
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    int maxOps = 0;
 
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
 
        int ops = 0;
        while (A % 2 == 0) {
            A /= 2;
            ops++;
        }
 
        maxOps = max(maxOps, ops);
    }
 
    cout << maxOps << endl;
 
    return 0;
}