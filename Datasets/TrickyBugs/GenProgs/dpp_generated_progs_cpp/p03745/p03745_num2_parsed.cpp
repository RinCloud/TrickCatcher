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

    int count = 1;
    int currCount = 1;

    for(int i = 1; i < N; i++) {
        if((A[i] > A[i-1] && A[i] > A[i+1]) || (A[i] < A[i-1] && A[i] < A[i+1])) {
            count++;
            currCount = 1;
        } else if(A[i] != A[i+1]) {
            currCount++;
        }
    }

    cout << count << endl;

    return 0;
}