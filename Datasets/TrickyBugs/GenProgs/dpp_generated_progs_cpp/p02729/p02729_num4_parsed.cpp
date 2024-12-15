#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int even_balls = N;
    int odd_balls = M;

    cout << even_balls * odd_balls << endl;

    return 0;
}