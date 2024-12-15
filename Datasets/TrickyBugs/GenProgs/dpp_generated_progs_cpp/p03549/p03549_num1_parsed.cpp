#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int TLE_cases = pow(2, M);
    int non_TLE_cases = N - M;

    int TLE_time = TLE_cases * 1900;
    int non_TLE_time = non_TLE_cases * 100;

    int total_time = TLE_time + non_TLE_time;

    cout << total_time << endl;

    return 0;
}