#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    int max_x = x[N-1];
    vector<bool> is_face_down(max_x+1, false);
    for (int i = 0; i < N; i++) {
        is_face_down[x[i]] = true;
    }

    int operations = 0;
    while (true) {
        bool all_face_down = true;
        for (int i = 1; i <= max_x; i++) {
            if (!is_face_down[i]) {
                all_face_down = false;
                break;
            }
        }
        if (all_face_down) {
            break;
        }

        int p = 3;
        while (true) {
            if (!is_prime(p)) {
                p++;
                continue;
            }

            int flip_start = -1;
            for (int i = 1; i <= max_x; i++) {
                if (is_face_down[i]) {
                    if (flip_start == -1) {
                        flip_start = i;
                    }
                } else {
                    if (flip_start != -1) {
                        if (i - flip_start == p) {
                            for (int j = flip_start; j < flip_start + p; j++) {
                                is_face_down[j] = !is_face_down[j];
                            }
                            operations++;
                            break;
                        } else {
                            flip_start = -1;
                        }
                    }
                }
            }
            if (flip_start == -1) {
                p++;
            }
        }
    }

    cout << operations << endl;

    return 0;
}