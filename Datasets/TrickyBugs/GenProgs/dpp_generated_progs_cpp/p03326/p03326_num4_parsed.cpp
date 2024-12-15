#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

struct Cake {
    ll beauty, tastiness, popularity;
};

ll solve(int N, int M, vector<Cake>& cakes) {
    vector<ll> scores; // List to store all possible scores
    
    for (int bit = 0; bit < (1 << N); bit++) {
        if (__builtin_popcount(bit) != M) {
            continue; // Skip if number of selected cakes is not M
        }
        
        ll beauty_score = 0, tastiness_score = 0, popularity_score = 0;
        for (int i = 0; i < N; i++) {
            if (bit & (1 << i)) {
                beauty_score += cakes[i].beauty; // Add beauty score of selected cake
                tastiness_score += cakes[i].tastiness; // Add tastiness score of selected cake
                popularity_score += cakes[i].popularity; // Add popularity score of selected cake
            }
        }
        scores.push_back(abs(beauty_score) + abs(tastiness_score) + abs(popularity_score)); // Calculate and store total score
    }
    
    sort(scores.rbegin(), scores.rend()); // Sort in descending order
    return scores[0]; // Return maximum score
    
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<Cake> cakes(N);
    for (int i = 0; i < N; i++) {
        cin >> cakes[i].beauty >> cakes[i].tastiness >> cakes[i].popularity;
    }
    
    ll ans = solve(N, M, cakes);
    cout << ans << endl;
    
    return 0;
}