#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N;
    
    bool arr[101] = {false};
    for (int i = 0; i < N; i++) {
        int p;
        cin >> p;
        arr[p] = true;
    }
    
    int answer = X;
    for (int i = 0; i <= 100; i++) {
        if (!arr[X - i]) {
            answer = X - i;
            break;
        }
        if (!arr[X + i]) {
            answer = X + i;
            break;
        }
    }
    
    cout << answer << endl;
    
    return 0;
}
