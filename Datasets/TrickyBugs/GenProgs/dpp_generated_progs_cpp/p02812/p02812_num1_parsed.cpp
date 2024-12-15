#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    string S;
    
    // Read N and S
    cin >> N >> S;
    
    int count = 0;
    for (int i = 0; i <= N - 3; i++) {
        if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C') {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}