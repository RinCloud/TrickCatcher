#include<iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    int numSounds = B / A;
    if(numSounds > C) {
        numSounds = C;
    }
    
    cout << numSounds << endl;
    
    return 0;
}