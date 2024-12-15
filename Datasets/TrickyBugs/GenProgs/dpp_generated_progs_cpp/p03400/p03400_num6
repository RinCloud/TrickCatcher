#include <iostream>
using namespace std;

int main() {
    int N, D, X;
    cin >> N >> D >> X;
    
    int choco_pieces = X;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        
        int eaten_days = 1;
        while (eaten_days <= D) {
            choco_pieces++;
            eaten_days += A + 1;
        }
    }
    
    cout << choco_pieces << endl;
    
    return 0;
}