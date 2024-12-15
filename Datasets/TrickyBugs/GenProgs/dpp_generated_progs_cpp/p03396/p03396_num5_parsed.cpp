#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    
    vector<int> shoppingCentres(N);
    for (int i = 0; i < N; i++) {
        cin >> shoppingCentres[i];
    }
    
    vector<int> shoppingTimes(N);
    for (int i = 0; i < N; i++) {
        cin >> shoppingTimes[i];
    }
    
    int totalTime = 0;
    int currentPosition = 0;
    int trainDirection = 1;
    
    for (int i = 0; i <= N; i++) {
        int nextPosition = (i == N) ? 0 : shoppingCentres[i];
        int travelTime = abs(nextPosition - currentPosition);
        int shoppingTime = shoppingTimes[i];
        
        if (trainDirection == 1 && nextPosition < currentPosition) {
            travelTime = (L - currentPosition) + nextPosition;
        } else if (trainDirection == -1 && nextPosition > currentPosition) {
            travelTime = currentPosition + (L - nextPosition);
        }
        
        totalTime += travelTime + shoppingTime;
        currentPosition = nextPosition;
        trainDirection *= -1;
    }
    
    cout << totalTime << endl;
    
    return 0;
}