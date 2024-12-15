#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    bool canBuy = false;
    
    for (int numCakes = 0; numCakes <= N / 4; numCakes++) {
        for (int numDonuts = 0; numDonuts <= N / 7; numDonuts++) {
            if (numCakes * 4 + numDonuts * 7 == N) {
                canBuy = true;
                break;
            }
        }
        if (canBuy) {
            break;
        }
    }
    
    if (canBuy) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}