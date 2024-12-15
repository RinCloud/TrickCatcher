#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;
    
    std::vector<int> red(N + 1, 0);
    std::vector<int> count(N + 1, 1);
    red[1] = 1;
    
    for (int i = 0; i < M; i++) {
        int x, y;
        std::cin >> x >> y;
        
        if (red[x]) {
            red[y] = 1;
        }
        
        count[x]--;
        count[y]++;
        
        if (count[x] == 0) {
            red[x] = 0;
        }
    }
    
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        ans += red[i];
    }
    
    std::cout << ans << std::endl;
    
    return 0;
}