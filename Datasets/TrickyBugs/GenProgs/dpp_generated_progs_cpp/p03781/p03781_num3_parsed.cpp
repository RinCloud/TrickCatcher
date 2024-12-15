#include <iostream>

int findEarliestTime(int X)
{
    int time = 0;
    int position = 0;
    
    while (position < X)
    {
        time++;
        position += time;
    }
    
    return time;
}

int main()
{
    int X;
    std::cin >> X;
    
    int earliestTime = findEarliestTime(X);
    std::cout << earliestTime << std::endl;
    
    return 0;
}