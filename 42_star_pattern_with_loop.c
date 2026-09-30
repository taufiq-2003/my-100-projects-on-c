#include <stdio.h>

int main()
{
   char a = '*';
   int x = 1;
   int y =1;
   int number;
   printf("enter nnumber  \n");
   scanf("%d", &number);
   
   

   printf("\n\nfront order  \n");

   for (int i = 0; i < number; i++)
   {
      for (int j = 0; j < i; j++)
      {
         printf("%c  ", a);
      }
   
      printf("%c  \n", a);
   }
   
   printf("\n\n\nreverse order  \n");

   for (int k = 0; k < number; k++)
   {
      for (int m = number; x < m; m--)
      {
         printf("%c  ", a);
      }
      x = x + 1;
      printf("%c  \n", a);
   }


   printf("\n\nfront order  \n");

   for (int n = 0; n < number; n++)
   {
         for (int s = number; y < s; s--)
      {
         printf(" ");
      }
      y=y+1;
      for (int p = 0; p < n; p++)
      {
         printf("%c ", a);
      }
      printf("%c  \n", a);
   }



   int f;
   f=number;
   printf("reverse order  \n");

   for (int y = 0; y < number; y++)
   {  
      for (int z = f; z !=1; z--)
      {
         printf("  ");
         
      }

      for (int h = 0; h < y; h++)
      {
       printf("%c ",a);
       
      }
      
      
      printf("%c\n",a);
      f=f-1;
   }
   
   
   
   

   return 0;
}