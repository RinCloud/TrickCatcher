#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;

    vector<int> shopping_centres(N);
    vector<int> shopping_times(N);

    for (int i = 0; i < N; i++) {
        cin >> shopping_centres[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> shopping_times[i];
    }

    int time = 0;
    int direction = 1; // 1 for positive direction, -1 for negative direction
    int current_station = 0;
    int min_time = L * 2;

    for (int i = 0; i < N; i++) {
        int shopping_centre = shopping_centres[i];
        int shopping_time = shopping_times[i];

        if ((direction == 1 && current_station <= shopping_centre) || (direction == -1 && current_station >= shopping_centre)) {
            time += shopping_centre - current_station;
            time += shopping_time;
            current_station = shopping_centre;
        } else {
            int remaining_distance;
            if (direction == 1) {
                remaining_distance = L - current_station + shopping_centre;
            } else {
                remaining_distance = current_station + L - shopping_centre;
            }

            time += remaining_distance;
            time += shopping_time;
            current_station = shopping_centre;
            direction *= -1;
        }

        min_time = min(min_time, time + L - current_station);
    }

    cout << min_time << endl;

    return 0;
}