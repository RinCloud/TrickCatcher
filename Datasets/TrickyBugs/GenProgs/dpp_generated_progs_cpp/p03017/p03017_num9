#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, A, B, C, D;
    cin >> N >> A >> B >> C >> D;
    string S;
    cin >> S;

    // If either Snuke or Fnuke can't reach their destination in a single jump
    // or if there is a rock between their destinations, output "No"
    if (S.substr(A - 1, C - A + 1).find("##") != string::npos ||
        S.substr(B - 1, D - B + 1).find("##") != string::npos) {
        cout << "No" << endl;
    } 
    // If Snuke can reach his destination before Fnuke
    // and there are no rocks between their destinations, output "Yes"
    else if (C < D || S.substr(B - 2, D - B + 3).find("...") != string::npos) {
        cout << "Yes" << endl;
    } 
    // If Snuke can't reach his destination before Fnuke, output "No"
    else {
        cout << "No" << endl;
    }
    return 0;
}