#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> diameters(N);
    for (int i = 0; i < N; i++) {
        cin >> diameters[i];
    }
    sort(diameters.begin(), diameters.end(), greater<int>());
    int layers = 1;
    for (int i = 1; i < N; i++) {
        if (diameters[i] < diameters[i-1]) {
            layers++;
        }
    }
    cout << layers << endl;
    return 0;
}