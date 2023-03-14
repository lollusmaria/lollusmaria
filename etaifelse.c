#include <stdio.h>
int main()
{
   int età;

   printf ("inserisci la tua età");
   scanf ("%d", &età);

   if (età > 18)
   {
    printf("devi pagare le tasse\n");
   }   
   else if (età == 18)
   {
    printf("auguri\n");
    printf("oppre hai un po più di diciotto anni");
   }
   else
   {
    printf("non devi pagare le tasse\n");
   }
}