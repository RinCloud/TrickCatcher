#include <iostream>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    
    // Calculating the distance between A and C
    int distanceAC = std::abs(a - c);
    
    // If the distance is less than or equal to d, A and C can directly communicate
    if (distanceAC <= d) {
        std::cout << "Yes";
    }
    else {
        // Calculating the distance between A and B
        int distanceAB = std::abs(a - b);
        
        // Calculating the distance between B and C
        int distanceBC = std::abs(b - c);
        
        // If both distances are less than or equal to d, A and C can indirectly communicate through B
        if (distanceAB <= d && distanceBC <= d) {
            std::cout << "Yes";
        }
        else {
            std::cout << "No";
        }
    }
    
    return 0;
}