#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int min_diff = N % K;
    cout << min_diff << endl;

    return 0;
}