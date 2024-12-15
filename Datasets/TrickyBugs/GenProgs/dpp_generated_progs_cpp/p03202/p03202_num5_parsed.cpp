#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> lengths(N);
    for (int i = 0; i < N; i++) {
        cin >> lengths[i];
    }

    sort(lengths.begin(), lengths.end());

    int minNumChars = lengths[0];
    int maxNumChars = lengths[N - 1];

    int answer = maxNumChars - minNumChars + 1;

    cout << answer << endl;

    return 0;
}