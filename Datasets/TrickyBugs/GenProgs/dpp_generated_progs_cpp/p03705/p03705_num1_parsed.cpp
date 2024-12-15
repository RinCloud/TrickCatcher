#include<iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int minSum = A * (N - 1) + B;
    int maxSum = B * (N - 1) + A;

    int possibleSums = maxSum - minSum + 1;
    if (A == B)
        possibleSums = 1;

    if (possibleSums < 0)
        possibleSums = 0;

    cout << possibleSums << endl;

    return 0;
}