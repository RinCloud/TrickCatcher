#include <iostream>
#include <string>

using namespace std;

int main() {
    int K;
    cin >> K;

    string sequence = "7";
    int position = 1;
    
    while(stoll(sequence) % K != 0) {
        sequence += "7";
        position++;
        
        if(position > 1000000) {
            cout << "-1" << endl;
            return 0;
        }
    }
    
    cout << position << endl;
    
    return 0;
}