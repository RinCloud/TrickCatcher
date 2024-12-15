#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<long long> beauty(N), tastiness(N), popularity(N);
    
    for (int i = 0; i < N; i++)
        cin >> beauty[i] >> tastiness[i] >> popularity[i];
        
    long long max_score = 0;
    
    for (int a = -1; a <= 1; a += 2) {
        for (int b = -1; b <= 1; b += 2) {
            for (int c = -1; c <= 1; c += 2) {
                vector<long long> scores;
                
                for (int i = 0; i < N; i++) {
                    scores.push_back(a * beauty[i] + b * tastiness[i] + c * popularity[i]);
                }
                
                sort(scores.begin(), scores.end(), greater<long long>());
                
                long long total_score = 0;
                
                for (int i = 0; i < M; i++) {
                    total_score += scores[i];
                }
                
                max_score = max(max_score, abs(total_score));
            }
        }
    }
    
    cout << max_score << endl;
    
    return 0;
}