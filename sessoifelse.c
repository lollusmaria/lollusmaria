#include <stdio.h>
int main()
{
   char sesso;

   printf ("inserisci il tuo sesso: ");
   scanf (" %c", &sesso);

   if (sesso == 'm')
   {
    printf ("sei un husbando\n");
   }   
   else if (sesso == 'f')
   {
    printf ("sei una waifu\n");
   }
   else if (sesso == 'n')
   {
    printf ("OH MY GOD\n");
   }
   else
   {
    printf("errore");
   }
}