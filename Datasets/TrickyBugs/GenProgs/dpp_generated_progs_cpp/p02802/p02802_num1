#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> correct(N);
    vector<int> penalty(N);
    unordered_map<int, int> wa_count;

    for (int i = 0; i < M; i++) {
        int p;
        string S;
        cin >> p >> S;

        if (S == "AC") {
            correct[p-1] = 1;
            penalty[p-1] += wa_count[p];
        } else {
            wa_count[p]++;
        }
    }

    int correct_count = 0;
    int penalty_count = 0;

    for (int i = 0; i < N; i++) {
        correct_count += correct[i];
        penalty_count += penalty[i];
    }

    cout << correct_count << " " << penalty_count << endl;

    return 0;
}