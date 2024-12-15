#include <iostream>
#include <unordered_set>

int main() {
    int s;
    std::cin >> s;

    // Create a set to store the sequence
    std::unordered_set<int> sequence;

    int current = s;
    int m = 0;

    // Iterate until the sequence repeats
    while (sequence.find(current) == sequence.end()) {
        sequence.insert(current);
        current = (current % 2 == 0) ? (current / 2) : (3 * current + 1);
        m++;
    }

    std::cout << m << std::endl;

    return 0;
}