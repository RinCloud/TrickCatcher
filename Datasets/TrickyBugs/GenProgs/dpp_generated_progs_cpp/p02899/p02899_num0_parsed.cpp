#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> students(N);
    for (int i = 0; i < N; i++) {
        cin >> students[i];
    }

    vector<int> order(N);
    for (int i = 0; i < N; i++) {
        order[students[i] - 1] = i + 1;
    }

    for (int i = 0; i < N; i++) {
        cout << order[i] << " ";
    }
    cout << endl;

    return 0;
}