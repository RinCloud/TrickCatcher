#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool hasDenied = false;
    for(int i=0; i<N; i++) {
        int num;
        cin >> num;
        
        if(num % 2 == 0 && (num % 3 != 0 && num % 5 != 0)) {
            hasDenied = true;
            break;
        }
    }
    
    if(hasDenied) {
        cout << "DENIED" << endl;
    } else {
        cout << "APPROVED" << endl;
    }

    return 0;
}