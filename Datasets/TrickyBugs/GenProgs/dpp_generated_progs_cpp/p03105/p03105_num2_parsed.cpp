#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int count = min(B / A, C);
    cout << count << endl;

    return 0;
}