#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> b(N);
    for (int i = 0; i < N; i++) {
        cin >> b[i];
    }

    vector<int> a;
    vector<int> operations;

    for (int i = 0; i < N; i++) {
        int j = -1;
        for (int k = 0; k < a.size(); k++) {
            if (a[k] == b[i] - 1) {
                j = k;
                break;
            }
        }
        
        if (j == -1 || j > i) {
            cout << -1 << endl;
            return 0;
        }

        a.insert(a.begin() + j, b[i] - 1);
        operations.push_back(b[i] - 1);
    }

    for (int i = 0; i < N; i++) {
        cout << operations[i] + 1 << endl;
    }

    return 0;
}