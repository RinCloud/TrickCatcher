#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> verdicts(N);
    for (int i = 0; i < N; i++) {
        cin >> verdicts[i];
    }

    map<string, int> count;
    for (string verdict : verdicts) {
        count[verdict]++;
    }

    cout << "AC" << " x " << count["AC"] << endl;
    cout << "WA" << " x " << count["WA"] << endl;
    cout << "TLE" << " x " << count["TLE"] << endl;
    cout << "RE" << " x " << count["RE"] << endl;

    return 0;
}