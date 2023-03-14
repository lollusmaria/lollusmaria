#include <stdio.h>
int main()
{
   int età;

   printf ("inserisci la tua età");
   scanf ("%d", &età);

   if (età >= 18)
   {
    printf("sei maggiorenne\n");
   }   
   else
   {
    printf("non sei maggiorenne\n");
   }
}