#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    int strips = 0;
    int emptySockets = 1;
    
    while(emptySockets < B){
        emptySockets += (A-1);
        strips++;
    }
    
    cout << strips << endl;
    
    return 0;
}