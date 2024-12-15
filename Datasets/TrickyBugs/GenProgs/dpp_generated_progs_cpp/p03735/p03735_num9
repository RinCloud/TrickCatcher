#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Read the input and store the values in vectors
    vector<int> red(N);
    vector<int> blue(N);
    for (int i = 0; i < N; i++) {
        cin >> red[i] >> blue[i];
    }

    // Sort the red and blue vectors in ascending order
    sort(red.begin(), red.end());
    sort(blue.begin(), blue.end());

    // Calculate the minimum possible value
    long long result = (long long)(red[N-1] - red[0]) * (blue[N-1] - blue[0]);

    cout << result << endl;

    return 0;
}