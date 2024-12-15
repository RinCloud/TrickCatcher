#include <iostream>
#include <string>

int main()
{
    std::string S;
    std::cin >> S;

    bool is_easily_playable = true;
    for (int i = 0; i < S.size(); i++)
    {
        if ((i % 2 == 0 && S[i] == 'R') || (i % 2 == 1 && S[i] == 'L'))
        {
            is_easily_playable = false;
            break;
        }
    }

    if (is_easily_playable)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}