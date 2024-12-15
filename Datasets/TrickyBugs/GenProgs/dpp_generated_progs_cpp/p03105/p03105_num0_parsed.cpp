#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    int numSounds = min(B/A, C);
    cout << numSounds << endl;
    
    return 0;
}