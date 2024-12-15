#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to count the number of divisors
int countDivisors(int n)
{
    int count = 0;
    
    // Iterating through all the numbers from 1 to n
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If both divisors are equal, increase count by 1
            if (n / i == i)
                count++;
            
            // Otherwise, increase count by 2
            else
                count += 2;
        }
    }
    
    return count;
}

// Function to calculate the factorial of a number
int factorial(int n)
{
    int fact = 1;
    
    // Calculating the factorial
    for (int i = 2; i <= n; i++)
        fact *= i;
    
    return fact;
}

// Function to find the number of Shichi-Go numbers in N!
int findShichiGoNumbers(int n)
{
    int ans = 0;
    int fact = factorial(n);
    
    // Iterating through all the divisors of N!
    for (int i = 1; i <= fact; i++)
    {
        // If the number of divisors is 75, increment ans by 1
        if (countDivisors(i) == 75)
            ans++;
    }
    
    return ans;
}

int main()
{
    // Reading the input value of N
    int N;
    cin >> N;

    // Finding the number of Shichi-Go numbers in N!
    int result = findShichiGoNumbers(N);

    // Printing the output
    cout << result << endl;

    return 0;
}