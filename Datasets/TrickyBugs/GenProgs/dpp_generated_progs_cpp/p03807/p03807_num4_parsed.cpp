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

    int even_count = 0;
    int odd_count = 0;

    for(int i = 0; i < N; i++) {
        if(A[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    if(odd_count % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}