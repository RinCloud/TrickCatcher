#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, A, B, C, D;
    string S;
  
    cin >> N >> A >> B >> C >> D;
    cin >> S;
  
    bool possible = false;
  
    // Check if Snuke can reach Square C before Fnuke reaches Square D
    if (C < D) {
        possible = true;
        for (int i = B; i < D - 1; i++) {
            if (S[i] == '#' && S[i+1] == '#') {
                possible = false;
                break;
            }
        }
    }

    // Check if Snuke can reach Square C after Fnuke reaches Square D
    if (possible && A < C) {
        for (int i = A; i < C - 1; i++) {
            if (S[i] == '#' && S[i+1] == '#') {
                possible = false;
                break;
            }
        }
    }

    if (possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}