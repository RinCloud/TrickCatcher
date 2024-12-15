#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> score(3);
    cin >> score[0] >> score[1] >> score[2];
    string T;
    cin >> T;

    int total_score = 0;

    for (int i = 0; i < N; i++) {
        char machine_hand = T[i];
        char player_hand;

        if (i < K) {
            // In the first K rounds, the player can use any hand
            if (machine_hand == 'r') {
                player_hand = 'p';
            } else if (machine_hand == 'p') {
                player_hand = 's';
            } else {
                player_hand = 'r';
            }
        } else {
            // From the K+1 round onwards, the player cannot use the hand used in the (i-K)th round
            char previous_hand = T[i - K];

            if (previous_hand == 'r') {
                player_hand = 'p';
            } else if (previous_hand == 'p') {
                player_hand = 's';
            } else {
                player_hand = 'r';
            }
        }

        if (player_hand == 'r') {
            total_score += score[0];
        } else if (player_hand == 's') {
            total_score += score[1];
        } else {
            total_score += score[2];
        }
    }

    cout << total_score << endl;

    return 0;
}