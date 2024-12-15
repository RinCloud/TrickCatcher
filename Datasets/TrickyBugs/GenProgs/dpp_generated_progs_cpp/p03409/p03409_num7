#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> red(N), blue(N);
    for(int i=0; i<N; i++) {
        cin >> red[i].first >> red[i].second;
    }
    for(int i=0; i<N; i++) {
        cin >> blue[i].first >> blue[i].second;
    }
    
    sort(red.begin(), red.end()); // Sort red points by x-coordinate
    sort(blue.begin(), blue.end()); // Sort blue points by x-coordinate

    int count = 0;
    vector<bool> used(N, false);

    for(int i=0; i<N; i++) {
        int max_y = -1;
        int max_idx = -1;

        // Find the blue point with maximum y-coordinate that forms a friendly pair
        for(int j=0; j<N; j++) {
            if(!used[j] && red[i].first < blue[j].first && red[i].second < blue[j].second && blue[j].second > max_y) {
                max_idx = j;
                max_y = blue[j].second;
            }
        }

        // If a friendly pair is found
        if(max_idx != -1) {
            count++;
            used[max_idx] = true;
        }
    }

    cout << count << endl;
    
    return 0;
}