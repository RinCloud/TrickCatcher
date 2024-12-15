#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int P, Q, R;
    cin >> P >> Q >> R;
    
    int minSum = min(min(P+Q, Q+R), R+P);
    
    cout << minSum << endl;
    
    return 0;
}