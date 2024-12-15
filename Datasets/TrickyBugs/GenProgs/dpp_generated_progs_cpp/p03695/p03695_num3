#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> ratings(N);
    for(int i = 0; i < N; i++) {
        cin >> ratings[i];
    }
    
    vector<int> colors(9, 0);
    int max_colors = 0;
    
    for(int i = 0; i < N; i++) {
        if(ratings[i] < 400) {
            colors[0] = 1;
        } else if(ratings[i] < 800) {
            colors[1] = 1;
        } else if(ratings[i] < 1200) {
            colors[2] = 1;
        } else if(ratings[i] < 1600) {
            colors[3] = 1;
        } else if(ratings[i] < 2000) {
            colors[4] = 1;
        } else if(ratings[i] < 2400) {
            colors[5] = 1;
        } else if(ratings[i] < 2800) {
            colors[6] = 1;
        } else if(ratings[i] < 3200) {
            colors[7] = 1;
        } else {
            colors[8]++;
            max_colors++;
        }
    }
    
    int min_colors = count(colors.begin(), colors.end(), 1);
    if(min_colors == 0) {
        min_colors = 1;
    }
    
    cout << min_colors << " " << min_colors + colors[8] << endl;
    
    return 0;
}