#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    bool approved = true;
    
    for(int i=0; i<N; i++) {
        int num;
        cin >> num;
        
        if(num % 2 == 0 && (num % 3 != 0 && num % 5 != 0)) {
            approved = false;
            break;
        }
    }
    
    if(approved) {
        cout << "APPROVED" << endl;
    } else {
        cout << "DENIED" << endl;
    }
    
    return 0;
}