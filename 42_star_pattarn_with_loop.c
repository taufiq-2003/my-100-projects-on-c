#include <stdio.h>

int main()
{
   char a = '*';
   int x = 1;

   // printf("\n\nfront order  \n");

   // for (int i = 0; i < 5; i++)
   // {
   //    for (int j = 0; j < i; j++)
   //    {
   //       printf("%c  ", a);
   //    }
   
   //    printf("%c  \n", a);
   // }
   
   // printf("\n\n\nreverse order  \n");

   // for (int k = 0; k < 5; k++)
   // {
   //    for (int m = 5; x < m; m--)
   //    {
   //       printf("%c  ", a);
   //    }
   //    x = x + 1;
   //    printf("%c  \n", a);
   // }


   printf("\n\nfront order  \n");

   for (int n = 0; n < 5; n++)
   {
      for (int p = 0; p < n; p++)
      {
         printf("%c  ", a);
      }
      printf("%c  \n", a);
   }

   return 0;
}