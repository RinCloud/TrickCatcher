#include <iostream>
#include <vector>

int main(){
    int N, M;
    std::cin >> N >> M;
    std::vector<int> digits(N, -1);

    bool valid = true;
    for(int i = 0; i < M; ++i){
        int s, c;
        std::cin >> s >> c;

        if(digits[s-1] != -1 && digits[s-1] != c){
            valid = false;
            break;
        }
        digits[s-1] = c;
    }

    if(!valid){
        std::cout << -1 << std::endl;
    }
    else{
        if(digits[0] == 0 && N > 1){
            std::cout << -1 << std::endl;
        }
        else{
            for(int i = 0; i < N; ++i){
                if(digits[i] == -1){
                    digits[i] = (i == 0 && N > 1) ? 1 : 0;
                }
                std::cout << digits[i];
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
