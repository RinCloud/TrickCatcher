#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int P, Q, R;
    cin >> P >> Q >> R;
    
    int min_sum = min(P + Q, min(Q + R, P + R));
    cout << min_sum << endl;
    
    return 0;
}