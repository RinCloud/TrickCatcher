#include <iostream>

int main() {
    long long N;
    std::cin >> N;
    
    int count = 0;
    long long note = 1;
    
    while (N > 0) {
        if (N >= note) {
            N -= note;
            count++;
        } else {
            note *= 10;
        }
    }
    
    std::cout << count << std::endl;
    
    return 0;
}