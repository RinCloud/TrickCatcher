#include <iostream>
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
    
    string verdict;
    for (int i = 0; i < N; i++) {
        cin >> verdict;
        verdicts[verdict]++;
    }
    
    cout << "AC x " << verdicts["AC"] << endl;
    cout << "WA x " << verdicts["WA"] << endl;
    cout << "TLE x " << verdicts["TLE"] << endl;
    cout << "RE x " << verdicts["RE"] << endl;
    
    return 0;
}