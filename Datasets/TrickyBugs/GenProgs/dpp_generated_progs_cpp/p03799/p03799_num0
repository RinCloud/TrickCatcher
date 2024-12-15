#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    
    long long groups = min(N, M/2);
    long long remaining_c = max(M - 2 * groups, 0LL);
    long long remaining_s = max(N - groups, 0LL);
    
    groups += min(remaining_c / 4, remaining_s);
    
    cout << groups << endl;
    
    return 0;
}