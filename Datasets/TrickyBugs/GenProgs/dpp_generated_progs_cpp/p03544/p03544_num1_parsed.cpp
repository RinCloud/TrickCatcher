#include <iostream>
#include <vector>

// Function to find the N-th Lucas number
long long findLucasNumber(int N)
{
    // Initialize the first two Lucas numbers
    std::vector<long long> lucasNumbers = {2, 1};

    // Calculate the N-th Lucas number using the recurrence relation
    for (int i = 2; i <= N; i++)
    {
        long long lucasNumber = lucasNumbers[i - 1] + lucasNumbers[i - 2];
        lucasNumbers.push_back(lucasNumber);
    }

    // Return the N-th Lucas number
    return lucasNumbers[N];
}

int main()
{
    // Read the input N
    int N;
    std::cin >> N;

    // Find and print the N-th Lucas number
    long long lucasNumber = findLucasNumber(N);
    std::cout << lucasNumber << std::endl;

    return 0;
}