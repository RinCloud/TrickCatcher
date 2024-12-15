#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }
    
    vector<int> sortedP = P;
    sort(sortedP.begin(), sortedP.begin() + K);
    
    int count = 0;
    for (int i = 0; i <= N - K; i++) {
        vector<int> temp = P;
        sort(temp.begin() + i, temp.begin() + i + K);
        if (temp == sortedP) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}