#include <stdio.h>
int main()
{
   int x;
   char y;

   printf ("inserisci la tua età");
   scanf ("%d", &x);
   printf ("ïnserisci il tuo sesso");
   scanf (" %c", &y);
   printf ("ïo ho %d anni\n e sono %c\n", x, y);
}