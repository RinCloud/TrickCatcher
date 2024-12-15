#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    vector<int> diff(N);
    for (int i = 0; i < N; i++) {
        if (S[i] == '>') {
            diff[i] = 1;
        } else if (S[i] == '<') {
            diff[i] = -1;
        }
    }

    long long answer = 0;
    vector<int> count(N + 1);
    count[0] = 1;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += diff[i];
        count[sum]++;
        answer += count[sum - 1];
    }

    cout << answer << endl;

    return 0;
}