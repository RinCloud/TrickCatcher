#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int evenCount = 0, oddCount = 0;
    for(int i = 0; i < N; i++) {
        if(A[i] % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    if(evenCount % 2 == 0 && oddCount % 2 == 0) {
        cout << "YES" << endl;
    }
    else if(evenCount % 2 != 0 && oddCount % 2 != 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}