#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int TLE_cases = M * 1900;
    int AC_cases = (N - M) * 100;

    int X = TLE_cases + AC_cases;

    cout << X << endl;

    return 0;
}
