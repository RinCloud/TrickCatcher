#include <iostream>

using namespace std;

int main() {
    long long int N, A, B;
    cin >> N >> A >> B;
    
    long long int num_blue = (N / (A + B)) * A;
    long long int remainder = N % (A + B);
    
    if (remainder <= A) {
        num_blue += remainder;
    } else {
        num_blue += A;
    }
    
    cout << num_blue << endl;

    return 0;
}