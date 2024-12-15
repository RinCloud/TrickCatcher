#include <iostream>
#include <vector>

int main()
{
    int N;
    std::cin >> N;

    std::vector<int> deliciousness(N);
    for (int i = 0; i < N; i++)
    {
        std::cin >> deliciousness[i];
    }

    int sum = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int healthPoints = deliciousness[i] * deliciousness[j];
            sum += healthPoints;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}