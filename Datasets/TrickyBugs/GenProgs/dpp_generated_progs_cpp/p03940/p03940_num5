#include <iostream>
#include <vector>

long long calculateTime(int N, int E, int T, const std::vector<int>& bears) {
    long long minimumTime = 0;
    
    // Start position of the player
    int currentPosition = 0;
    
    // Iterate through each bear
    for (int i = 0; i < N; i++) {
        // Calculate the time taken to reach the bear's position
        long long timeToBear = bears[i] - currentPosition;
        
        // Calculate the time taken to give candy to the bear and receive coin
        long long timeToCoin = T;
        
        // Update the minimum time
        minimumTime += std::max(timeToBear, timeToCoin);
        
        // Update the current position to bear's position
        currentPosition = bears[i];
    }
    
    // Calculate the time taken to reach the exit
    long long timeToExit = E - currentPosition;
    
    // Update the minimum time
    minimumTime += timeToExit;
    
    return minimumTime;
}

int main() {
    int N, E, T;
    std::cin >> N >> E >> T;
    
    std::vector<int> bears(N);
    for (int i = 0; i < N; i++) {
        std::cin >> bears[i];
    }
    
    long long result = calculateTime(N, E, T, bears);
    
    std::cout << result << std::endl;
    
    return 0;
}