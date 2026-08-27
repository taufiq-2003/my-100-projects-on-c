#include <stdio.h> 

int main()
{ 
   int a;
   printf("enter the number that you want the multiplication table of  \n");
   scanf("%d", &a);

   for (int i = 1; i < 11; i++)
   {
    printf("%dx%d=%d  \n",a,i,a*i);
    
   }
   
    
 
return 0;
}