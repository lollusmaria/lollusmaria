#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("inserisci un numero\n");

    scanf("%d", &x);

    y = x;
    if ( x == 1 )
    printf("non è primo\n");

        while(y > 2)
        {

    y = y - 1;

    if ( x % y == 0 )
    {
        printf("%d non è primo\n", x);
        y = 1;
    }
        }
        if (y != 1)
    {
        printf("%d è primo\n", x);
    }
    
}