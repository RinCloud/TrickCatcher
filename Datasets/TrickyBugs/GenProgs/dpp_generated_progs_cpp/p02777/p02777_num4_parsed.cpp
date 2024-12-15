#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T, U;
    int A, B;
    cin >> S >> T;
    cin >> A >> B;
    cin >> U;

    int s_count = 0, t_count = 0;
    if (U == S)
        s_count = A - 1;
    else
        s_count = A;
    if (U == T)
        t_count = B - 1;
    else
        t_count = B;

    cout << s_count << " " << t_count << endl;

    return 0;
}