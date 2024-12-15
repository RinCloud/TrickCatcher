#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int count_1 = 0;
    for(char c : S) {
        if (c == '1') {
            count_1++;
        }
    }
    
    int K = min(count_1, (int)S.size() - count_1);
    cout << K << endl;
    
    return 0;
}