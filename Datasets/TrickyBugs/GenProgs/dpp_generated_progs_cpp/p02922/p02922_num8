#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int powerStrips = 0;
    int emptySockets = 1;
    
    while (emptySockets < B) {
        emptySockets += A - 1;
        powerStrips++;
    }
    
    cout << powerStrips << endl;
    
    return 0;
}