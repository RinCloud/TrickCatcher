#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> ratings(N);
    for (int i = 0; i < N; i++) {
        std::cin >> ratings[i];
    }
    
    std::vector<int> colors(9, 0);
    int maxColor = 0;
    for (int i = 0; i < N; i++) {
        if (ratings[i] < 400) {
            colors[0]++;
        } else if (ratings[i] < 800) {
            colors[1]++;
        } else if (ratings[i] < 1200) {
            colors[2]++;
        } else if (ratings[i] < 1600) {
            colors[3]++;
        } else if (ratings[i] < 2000) {
            colors[4]++;
        } else if (ratings[i] < 2400) {
            colors[5]++;
        } else if (ratings[i] < 2800) {
            colors[6]++;
        } else if (ratings[i] < 3200) {
            colors[7]++;
        } else {
            colors[8]++;
        }
        
        if (ratings[i] >= 3200) {
            maxColor++;
        }
    }
    
    int minColor = 0;
    for (int i = 0; i < 8; i++) {
        if (colors[i] > 0) {
            minColor++;
        }
    }
    
    minColor = (minColor == 0 && colors[8] > 0) ? 1 : minColor; // If there are no colors other than free colors, set minColor to 1
    
    std::cout << minColor << " " << minColor + maxColor << std::endl;
    
    return 0;
}