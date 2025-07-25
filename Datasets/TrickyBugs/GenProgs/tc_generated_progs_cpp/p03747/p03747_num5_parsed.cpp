#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n, l, t;

int main() {
    cin >> n >> l >> t;
    vector<pair<int, int>> ants(n); // Pair of coordinate and direction
    for(int i = 0; i < n; i++){
        cin >> ants[i].first >> ants[i].second;
    }
    
    vector<int> newPositions(n);
    for(int i = 0; i < n; i++){
        if(ants[i].second == 1){ // Clockwise direction
            newPositions[i] = (ants[i].first + t) % l;
        }else{ // Counterclockwise direction
            newPositions[i] = (ants[i].first - t) % l;
            if(newPositions[i] < 0)
                newPositions[i] += l;
        }
    }

    sort(newPositions.begin(), newPositions.end());
    for(int i = 0; i < n; i++){
        cout << newPositions[i] << endl;
    }
    return 0;
}
