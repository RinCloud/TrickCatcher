#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    map<string, int> verdicts;
    verdicts["AC"] = 0;
    verdicts["WA"] = 0;
    verdicts["TLE"] = 0;
    verdicts["RE"] = 0;
    
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        verdicts[s]++;
    }
    
    cout << "AC x " << verdicts["AC"] << endl;
    cout << "WA x " << verdicts["WA"] << endl;
    cout << "TLE x " << verdicts["TLE"] << endl;
    cout << "RE x " << verdicts["RE"] << endl;
    
    return 0;
}