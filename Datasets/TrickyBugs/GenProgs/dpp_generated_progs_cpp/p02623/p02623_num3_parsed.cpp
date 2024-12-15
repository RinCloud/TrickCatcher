#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> A(N), B(M);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }
    
    int maxBooks = 0;
    int timeRemaining = K;
    int aIndex = 0, bIndex = 0;
    
    while (aIndex < N && timeRemaining >= A[aIndex]) {
        timeRemaining -= A[aIndex];
        maxBooks++;
        aIndex++;
    }
    
    while (bIndex < M && timeRemaining >= B[bIndex]) {
        timeRemaining -= B[bIndex];
        maxBooks++;
        bIndex++;
    }
    
    int tempMaxBooks = maxBooks;
    while (aIndex >= 0 && timeRemaining + B[bIndex-1] >= B[bIndex] && bIndex < M) {
        timeRemaining += B[bIndex++];
        tempMaxBooks++;
        maxBooks = max(maxBooks, tempMaxBooks);
        while (aIndex >= 0 && timeRemaining >= A[aIndex]) {
            timeRemaining -= A[aIndex];
            tempMaxBooks--;
            aIndex--;
        }
    }
    
    cout << maxBooks << endl;

    return 0;
}