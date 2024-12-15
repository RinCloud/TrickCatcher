#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int num_cakes = 0; num_cakes <= N / 4; num_cakes++) {
        for (int num_doughnuts = 0; num_doughnuts <= N / 7; num_doughnuts++) {
            if ((4 * num_cakes + 7 * num_doughnuts) == N) {
                cout << "Yes";
                return 0;
            }
        }
    }
    
    cout << "No";
    return 0;
}