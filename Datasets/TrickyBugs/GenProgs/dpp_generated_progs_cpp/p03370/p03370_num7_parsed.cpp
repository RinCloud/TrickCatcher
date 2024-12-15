#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<int> m(N);
    for (int i = 0; i < N; i++) {
        cin >> m[i];
    }
    
    int minMoto = *min_element(m.begin(), m.end());
    int doughnuts = N;
    X -= minMoto * N;
    
    doughnuts += X / minMoto;
    
    cout << doughnuts << endl;
    
    return 0;
}