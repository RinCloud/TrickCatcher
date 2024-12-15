#include <iostream>
#include <vector>

int main()
{
    int N;
    std::cin >> N;
    
    std::vector<int> C(N - 1);
    std::vector<int> S(N - 1);
    std::vector<int> F(N - 1);
    
    for (int i = 0; i < N - 1; i++)
    {
        std::cin >> C[i] >> S[i] >> F[i];
    }
    
    std::vector<int> ans(N);
    ans[N - 1] = 0;
    
    for (int i = N - 2; i >= 0; i--)
    {
        int t = ans[i + 1];
        
        if (t < S[i])
        {
            t = S[i];
        }
        else if (t % F[i] != 0)
        {
            t += F[i] - (t % F[i]);
        }
        
        ans[i] = t + C[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        std::cout << ans[i] << "\n";
    }
    
    return 0;
}