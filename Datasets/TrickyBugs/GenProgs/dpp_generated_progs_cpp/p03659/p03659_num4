#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }
    
    sort(cards.begin(), cards.end());
    
    int snuke_sum = 0;
    int raccoon_sum = 0;
    for (int i = 0; i < N; i++) {
        if (i < N/2) {
            snuke_sum += cards[i];
        } else {
            raccoon_sum += cards[i];
        }
    }
    
    int diff = abs(snuke_sum - raccoon_sum);
    cout << diff << endl;
    
    return 0;
}