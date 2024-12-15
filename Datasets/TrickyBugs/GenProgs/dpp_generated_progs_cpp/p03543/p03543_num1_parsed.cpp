#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    string strN = to_string(N);
    
    if(strN[0] == strN[1] && strN[1] == strN[2] || strN[1] == strN[2] && strN[2] == strN[3]) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}