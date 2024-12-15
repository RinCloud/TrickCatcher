#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    bool allowed = true;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        
        if (num % 2 == 0 && (num % 3 != 0 && num % 5 != 0)) {
            allowed = false;
            break;
        }
    }
    
    if (allowed) {
        cout << "APPROVED" << endl;
    } else {
        cout << "DENIED" << endl;
    }
    
    return 0;
}