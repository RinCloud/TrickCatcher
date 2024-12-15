#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> ratings(N);
    for (int i = 0; i < N; i++) {
        std::cin >> ratings[i];
    }
    
    int colors[8] = {0};
    int max_rating = 0;
    
    for (int i = 0; i < N; i++) {
        if (ratings[i] < 400) {
            colors[0] = 1;
        } else if (ratings[i] < 800) {
            colors[1] = 1;
        } else if (ratings[i] < 1200) {
            colors[2] = 1;
        } else if (ratings[i] < 1600) {
            colors[3] = 1;
        } else if (ratings[i] < 2000) {
            colors[4] = 1;
        } else if (ratings[i] < 2400) {
            colors[5] = 1;
        } else if (ratings[i] < 2800) {
            colors[6] = 1;
        } else if (ratings[i] < 3200) {
            colors[7] = 1;
        } else {
            max_rating++;
        }
    }
    
    int min_colors = 0;
    for (int i = 0; i < 8; i++) {
        if (colors[i] == 1) {
            min_colors++;
        }
    }
    
    if (min_colors == 0) {
        min_colors = 1;
    }
    
    int max_colors = min_colors + max_rating;
    
    std::cout << min_colors << " " << max_colors << "\n";
    
    return 0;
}