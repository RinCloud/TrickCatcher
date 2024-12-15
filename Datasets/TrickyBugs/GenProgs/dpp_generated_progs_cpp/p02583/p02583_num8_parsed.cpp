#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> lengths(N);
    for (int i = 0; i < N; i++) {
        cin >> lengths[i];
    }

    sort(lengths.begin(), lengths.end());

    int count = 0;
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (lengths[i] != lengths[j] && lengths[j] != lengths[k] && lengths[i] + lengths[j] > lengths[k]) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}