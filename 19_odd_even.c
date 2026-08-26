#include <stdio.h> 

int main()
{ int number;
   printf("enter your number  \n");
   scanf("%d", &number);
   
   if (number%2==0)
   {
    printf("the number you entered is even  \n");
    
   }
   else {
    printf("the number you entered is odd  \n");
    
   }
     
 
return 0;
}