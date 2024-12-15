#include <iostream>
#include <vector>

using namespace std;

int maximumValue(int N, vector<int>& values, vector<int>& costs) {
    int max_val = 0;
    for(int i=0; i<N; i++) {
        int val = values[i] - costs[i];
        if(val > 0) {
            max_val += val;
        }
    }
    return max_val;
}

int main() {
    int N;
    cin >> N;

    vector<int> values(N);
    for(int i=0; i<N; i++) {
        cin >> values[i];
    }

    vector<int> costs(N);
    for(int i=0; i<N; i++) {
        cin >> costs[i];
    }

    int result = maximumValue(N, values, costs);
    cout << result << endl;

    return 0;
}