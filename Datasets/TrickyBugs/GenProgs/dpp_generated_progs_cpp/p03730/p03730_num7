#include<iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if(C==0) {
        cout << "YES" << endl;
        return 0;
    }

    for(int i=1; i<=100; i++) {
        if((A*i)%B == C) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}