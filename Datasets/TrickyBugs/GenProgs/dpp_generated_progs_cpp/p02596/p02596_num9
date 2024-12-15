#include <iostream>
#include <string>

using namespace std;

int main() {
    int K;
    cin >> K;
    
    int count = 0;
    string sequence = "7";
    
    int pos = sequence.find('0' + K);
    while (pos == string::npos) {
        sequence += '7';
        pos = sequence.find('0' + K);
        count++;
        if (count > K) {
            cout << "-1" << endl;
            return 0;
        }
    }
    
    cout << sequence.size() << endl;
    
    return 0;
}