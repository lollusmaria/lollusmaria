#include <stdio.h>

int main()
{
    int x;

    x = 100;
    while(x >= 0)
    {
        printf("%d", x);
        x=x-2;
    }
}