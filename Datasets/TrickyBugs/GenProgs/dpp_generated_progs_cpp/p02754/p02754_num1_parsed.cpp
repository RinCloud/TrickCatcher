#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll N, A, B;
    cin >> N >> A >> B;
    
    ll num_blue_balls = (N / (A + B)) * A;
    if (N % (A + B) <= A) {
        num_blue_balls += N % (A + B);
    } else {
        num_blue_balls += A;
    }
    
    cout << num_blue_balls << endl;
    
    return 0;
}