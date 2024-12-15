#include <iostream>
#include <unordered_set>
 
int main() {
    int H, N;
    std::cin >> H >> N;
 
    std::unordered_set<int> moves;
 
    for (int i = 0; i < N; i++) {
        int A;
        std::cin >> A;
        moves.insert(A);
    }
 
    int remaining_health = H;
    bool can_win = false;
 
    for (int move : moves) {
        remaining_health -= move;
        if (remaining_health <= 0) {
            can_win = true;
            break;
        }
    }
 
    if (can_win) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
 
    return 0;
}