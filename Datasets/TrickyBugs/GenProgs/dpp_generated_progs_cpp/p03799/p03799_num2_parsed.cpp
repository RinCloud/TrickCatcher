#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    
    // Calculate the maximum number of Scc groups that can be created
    long long ans = min(N, M / 2);
    
    cout << ans << endl;
    
    return 0;
}
