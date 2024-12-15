#include <iostream>

int main()
{
    int A, B;
    std::cin >> A >> B;

    int strips_needed = 0;

    // Calculate the number of strips needed to extend the socket
    // until we have B or more empty sockets
    while (A < B)
    {
        A += A - 1; // Extend one empty socket to A empty sockets
        strips_needed++;
    }

    std::cout << strips_needed << std::endl;

    return 0;
}