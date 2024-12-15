#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> cityCount(N, 0);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        cityCount[a-1]++;
        cityCount[b-1]++;
    }
    
    for (int i = 0; i < N; i++) {
        cout << cityCount[i] << endl;
    }
    
    return 0;
}