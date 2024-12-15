#include <iostream>
#include <string>

int main() {
    int N;
    std::string s, t;
    
    // Read input
    std::cin >> N >> s >> t;
    
    // Determine the length of shortest string satisfying the conditions
    int length = 2 * N - std::min(s.size(), t.size()) + N;
    
    // Print the result
    std::cout << length << std::endl;
    
    return 0;
}