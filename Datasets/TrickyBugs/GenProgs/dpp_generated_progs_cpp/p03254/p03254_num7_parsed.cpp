#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, x;
    std::cin >> N >> x;
    
    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }
    
    std::sort(a.begin(), a.end());
    
    int happyChildren = 0;
    
    for (int i = 0; i < N; i++) {
        if (x >= a[i]) {
            happyChildren++;
            x -= a[i];
        } else {
            break;
        }
    }
    
    if (x > 0 && happyChildren == N) {
        happyChildren--;
    }
    
    std::cout << happyChildren << std::endl;
    
    return 0;
}