#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int x = (N + 110) / 111;
    cout << 111 * x << endl;

    return 0;
}