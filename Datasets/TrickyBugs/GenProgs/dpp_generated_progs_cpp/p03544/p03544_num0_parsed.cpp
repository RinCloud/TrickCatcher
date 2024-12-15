#include <iostream>
#include <vector>

using namespace std;

long long findLucasNumber(int N) {
    vector<long long> lucas(N+1);
    lucas[0] = 2;
    lucas[1] = 1;
    for (int i = 2; i <= N; i++) {
        lucas[i] = lucas[i-1] + lucas[i-2];
    }
    return lucas[N];
}

int main() {
    int N;
    cin >> N;
    cout << findLucasNumber(N) << endl;
    return 0;
}