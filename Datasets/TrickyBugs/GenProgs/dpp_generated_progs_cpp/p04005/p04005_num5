#include <iostream>
#include <algorithm>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    int min_diff = std::min({A*B*C - A*(B/2)*(C/2), A*B*C - (A/2)*B*(C/2), A*B*C - (A/2)*(B/2)*C});
    std::cout << min_diff << std::endl;

    return 0;
}