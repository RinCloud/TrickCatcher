#include<iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int strips = 0;
    int sockets = 1;

    while (sockets < B) {
        sockets += (A - 1);
        strips++;
    }

    cout << strips << endl;

    return 0;
}