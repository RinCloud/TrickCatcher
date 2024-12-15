#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::map<std::string, int> votes;
    for (int i = 0; i < N; i++) {
        std::string vote;
        std::cin >> vote;
        votes[vote]++;
    }
    
    int maxCount = 0;
    for (auto& vote : votes) {
        maxCount = std::max(maxCount, vote.second);
    }
    
    std::vector<std::string> mostVotesStrings;
    for (auto& vote : votes) {
        if (vote.second == maxCount) {
            mostVotesStrings.push_back(vote.first);
        }
    }
    
    std::sort(mostVotesStrings.begin(), mostVotesStrings.end());
    
    for (const auto& str : mostVotesStrings) {
        std::cout << str << std::endl;
    }
    
    return 0;
}