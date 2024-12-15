#include <iostream>
#include <string>

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    
    if(A.size() > B.size()) {
        cout << "GREATER" << endl;
    }
    else if(A.size() < B.size()) {
        cout << "LESS" << endl;
    }
    else {
        if(A > B) {
            cout << "GREATER" << endl;
        }
        else if(A < B) {
            cout << "LESS" << endl;
        }
        else {
            cout << "EQUAL" << endl;
        }
    }
    
    return 0;
}