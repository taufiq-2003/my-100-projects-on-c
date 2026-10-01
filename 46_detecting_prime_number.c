#include <stdio.h> 

int main()
{ 
   printf("checking prime number: \n");
    

   int n;
   printf("enter a number  \n");
   scanf("%d", &n);
   
   for (int i = 0; i < n; i++)
   {
    if (n%i ==0 )
    {
      printf("the number %d is not a prime number  \n",n);
      return 0;
    }
    
   }
   printf("the number %d is a prime number  \n",n);
   
 
return 0;
}