#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int answer = (N + 110) / 111 * 111;

    cout << answer << endl;

    return 0;
}