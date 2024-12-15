#include <iostream>
#include <cmath>

int main()
{
    int N, K;
    std::cin >> N >> K;
    int min_difference = std::floor((double)N / K);
    std::cout << N - (min_difference * K) << std::endl;
    return 0;
}
