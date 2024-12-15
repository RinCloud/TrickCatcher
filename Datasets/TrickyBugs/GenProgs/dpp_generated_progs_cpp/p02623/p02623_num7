#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<int> deskA(N);
    for(int i=0; i<N; i++) {
        cin >> deskA[i];
    }

    vector<int> deskB(M);
    for(int i=0; i<M; i++) {
        cin >> deskB[i];
    }

    int maxBooks = 0;
    int currentTime = 0;

    int i = 0, j = 0;
    while(i < N && currentTime + deskA[i] <= K) {
        currentTime += deskA[i];
        i++;
        maxBooks++;
    }

    while(j < M && i >= 0) {
        currentTime += deskB[j];
        j++;

        while(i > 0 && currentTime > K) {
            i--;
            currentTime -= deskA[i];
        }

        if(currentTime <= K)
            maxBooks = max(maxBooks, i + j);
    }

    cout << maxBooks << endl;

    return 0;
}