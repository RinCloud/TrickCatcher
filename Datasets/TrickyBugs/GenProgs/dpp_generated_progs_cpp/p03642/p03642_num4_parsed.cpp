#include<iostream>
#include<vector>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
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

    int max_card = x[N-1];
    vector<bool> is_face_up(max_card + 1, false);
    for (int i = 0; i < N; i++) {
        is_face_up[x[i]] = true;
    }

    int operations = 0;
    for (int p = 3; p <= max_card; p++) {
        if (!is_prime(p)) {
            continue;
        }

        bool all_down = true;
        for (int i = 1; i <= max_card - p + 1; i++) {
            bool has_up = false;
            for (int j = i; j < i + p; j++) {
                if (is_face_up[j]) {
                    has_up = true;
                    break;
                }
            }
            if (has_up) {
                for (int j = i; j < i + p; j++) {
                    is_face_up[j] = !is_face_up[j];
                }
                operations++;
                all_down = false;
            }
        }
        if (all_down) {
            break;
        }
    }

    cout << operations << endl;

    return 0;
}