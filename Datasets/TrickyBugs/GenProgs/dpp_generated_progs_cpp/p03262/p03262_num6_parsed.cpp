#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> cities(N);
    for (int i = 0; i < N; i++) {
        cin >> cities[i];
    }

    // Sort the cities in ascending order
    sort(cities.begin(), cities.end());

    // Initialize the maximum distance as the distance between the first city and X
    int maxDistance = cities[0] - X;

    // Iterate through all cities and calculate the distance between adjacent cities
    for (int i = 1; i < N; i++) {
        int distance = cities[i] - cities[i - 1];
        maxDistance = max(maxDistance, distance);
    }

    cout << maxDistance << endl;

    return 0;
}