#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> records(N);
    for (int i = 0; i < N; i++) {
        std::cin >> records[i];
    }
    
    std::vector<int> students(N);
    for (int i = 0; i < N; i++) {
        students[i] = i+1;
    }
    
    std::sort(students.begin(), students.end(), [&](int a, int b) {
        return records[a-1] < records[b-1];
    });
    
    for (int i = 0; i < N; i++) {
        std::cout << students[i] << " ";
    }
    
    return 0;
}