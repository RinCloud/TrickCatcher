#include <iostream>
#include <string>
using namespace std;

int main() {
    int K;
    cin >> K;
    
    string sequence = "7";
    int position = -1;
    
    for (int i = 1; i <= K; i++) {
        sequence += '7';
        
        if (stoi(sequence) % K == 0) {
            position = i + 1;
            break;
        }
    }
    
    cout << position << endl;
    
    return 0;
}