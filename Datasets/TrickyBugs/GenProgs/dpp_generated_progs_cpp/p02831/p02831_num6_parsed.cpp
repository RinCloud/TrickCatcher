#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    
    int max_guests = std::max(A, B);
    int min_guests = std::min(A, B);

    int pieces = max_guests * min_guests;
    std::cout << pieces << std::endl;

    return 0;
}