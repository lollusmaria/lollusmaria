#include <stdio.h>

int main()
{
    int x;
    
    

    printf ("inserisci il tuo anno di nascita: ");
    scanf("%d", &x);
    int y = 1969 - x;
    
    int z = x - 1969;
    



    if( x < 1969 )
    {
        printf ("sei nato %d anni prima dello sbarco sulla luna", y);
    }
    else if( x > 1969)
    {
        printf ("sei nato %d anni dopo lo sbarco sulla luna", z);
    }
    else if( x == 1969)
    {
        printf ("sei nato lo stsso anno dello sbarco ulla luna");
    }
}