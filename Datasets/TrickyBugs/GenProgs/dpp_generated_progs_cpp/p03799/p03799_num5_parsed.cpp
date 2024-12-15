#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    
    // Combine one 'S' piece and two 'c' pieces to form an 'Scc' group
    // Each 'Scc' group requires 1 'S' piece and 2 'c' pieces
    // The maximum number of 'Scc' groups is limited by the number of 'S' and 'c' pieces available
    
    // Find the minimum count between N (number of 'S' pieces) and M (number of 'c' pieces)
    // Divide this minimum count by 2 to obtain the maximum number of 'Scc' groups
    long long maxGroups = min(N, M / 2);
    
    cout << maxGroups << endl;
    
    return 0;
}