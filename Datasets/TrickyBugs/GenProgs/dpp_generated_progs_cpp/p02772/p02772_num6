#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    bool approve = true;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        
        if (num % 2 == 0 && num % 3 != 0 && num % 5 != 0) {
            approve = false;
            break;
        }
    }
    
    if (approve) {
        cout << "APPROVED" << endl;
    } else {
        cout << "DENIED" << endl;
    }
    
    return 0;
}