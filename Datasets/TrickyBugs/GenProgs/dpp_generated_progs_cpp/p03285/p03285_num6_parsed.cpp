#include <iostream>
using namespace std;

bool canBuyCakesAndDoughnuts(int N)
{
    // Loop through all possible number of cakes
    for (int numCakes = 0; numCakes <= N / 4; numCakes++)
    {
        int remainingAmount = N - numCakes * 4;
        // Loop through all possible number of doughnuts
        for (int numDoughnuts = 0; numDoughnuts <= remainingAmount / 7; numDoughnuts++)
        {
            int totalAmount = numCakes * 4 + numDoughnuts * 7;
            // Check if total amount matches the target amount
            if (totalAmount == N)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int N;
    cin >> N;

    if (canBuyCakesAndDoughnuts(N))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}