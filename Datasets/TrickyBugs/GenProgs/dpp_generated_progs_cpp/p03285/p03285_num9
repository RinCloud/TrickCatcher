#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int numCakes = 0; numCakes <= N / 4; numCakes++) {
        int remaining = N - numCakes * 4;
        if (remaining % 7 == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    return 0;
}