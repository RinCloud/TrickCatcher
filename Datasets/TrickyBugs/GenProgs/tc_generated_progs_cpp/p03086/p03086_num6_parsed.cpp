#include <stdio.h>

int main(void)
{
    int a = 0;
    int i;
    int max_length = 0;
    char s[11];

    scanf("%s", s);

    for (i = 0; i < 10; i++)
    {
        if (s[i] == 'A' || s[i] == 'T' || s[i] == 'G' || s[i] == 'C')
        {
            a++;
        }
        else
        {
            a = 0;
        }

        if (a > max_length)
        {
            max_length = a;
        }
    }

    printf("%d\n", max_length);
    return 0;
}
