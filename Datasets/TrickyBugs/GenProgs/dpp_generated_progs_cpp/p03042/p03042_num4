#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string S;
    cin >> S;
 
    bool is_yymm = false;
    bool is_mmyy = false;
 
    if (S[0] == '0') {
        if (S[1] <= '9' && S[1] >= '1') {
            is_mmyy = true;
        }
    } else if (S[1] == '0') {
        if (S[0] <= '1' && S[0] >= '0') {
            is_yymm = true;
        }
    } else if (S[0] <= '1' && S[0] >= '0' && S[1] <= '9' && S[1] >= '1') {
        is_yymm = true;
        is_mmyy = true;
    }
 
    if (S[2] == '0') {
        if (S[3] <= '9' && S[3] >= '1') {
            is_yymm = true;
        }
    } else if (S[3] == '0') {
        if (S[2] <= '1' && S[2] >= '0') {
            is_mmyy = true;
        }
    } else if (S[2] <= '1' && S[2] >= '0' && S[3] <= '9' && S[3] >= '1') {
        is_yymm = true;
        is_mmyy = true;
    }
 
    if (is_yymm && !is_mmyy) {
        cout << "YYMM" << endl;
    } else if (is_mmyy && !is_yymm) {
        cout << "MMYY" << endl;
    } else if (is_yymm && is_mmyy) {
        cout << "AMBIGUOUS" << endl;
    } else {
        cout << "NA" << endl;
    }
 
    return 0;
}