#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, E, T;
    cin >> N >> E >> T;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    int time = 0;
    int coins = 0;
    int position = 0;

    for (int i = 0; i < N; i++) {
        int distance = x[i] - position;
        int travelTime = distance;
        
        if (coins > 0) {
            travelTime = min(travelTime, (coins + T - 1) / coins);
            coins -= travelTime * coins;
        }
        
        position = x[i];
        time += travelTime;
        coins++;

        if (position == E) {
            break;
        }
    }

    cout << time + (E - position) << endl;

    return 0;
}