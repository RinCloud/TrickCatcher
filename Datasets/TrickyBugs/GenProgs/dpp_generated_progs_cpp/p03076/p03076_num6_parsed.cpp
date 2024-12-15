#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    int max_time = max({A, B, C, D, E});  // Find the maximum serving time
    int total_time = 0;

    // Place orders in reverse order, starting from the maximum serving time
    for (int i = max_time; i >= 0; i -= 10) {
        if (i == A) {
            total_time += A;  // Serve ABC Don
            A = 0;  // Dish delivered, reset time
        }
        if (i == B) {
            total_time += B;  // Serve ARC Curry
            B = 0;  // Dish delivered, reset time
        }
        if (i == C) {
            total_time += C;  // Serve AGC Pasta
            C = 0;  // Dish delivered, reset time
        }
        if (i == D) {
            total_time += D;  // Serve APC Ramen
            D = 0;  // Dish delivered, reset time
        }
        if (i == E) {
            total_time += E;  // Serve ATC Hanbagu
            E = 0;  // Dish delivered, reset time
        }
    }

    cout << total_time << endl;

    return 0;
}