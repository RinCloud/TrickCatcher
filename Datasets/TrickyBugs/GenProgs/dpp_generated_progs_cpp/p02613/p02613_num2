#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<string, int> verdicts;
    
    for (int i = 0; i < N; i++) {
        string S;
        cin >> S;
        verdicts[S]++;
    }
    
    cout << "AC " << "x " << verdicts["AC"] << endl;
    cout << "WA " << "x " << verdicts["WA"] << endl;
    cout << "TLE " << "x " << verdicts["TLE"] << endl;
    cout << "RE " << "x " << verdicts["RE"] << endl;
    
    return 0;
}