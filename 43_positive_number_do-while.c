#include <stdio.h> 

int main()
{ 
    int number;

    printf("welcome to force positive number checker  \n");
    
    
    
    do
    {
      printf("please enter a number  \n");
    scanf("%d", &number);
     
      
    } while (number<0);

    printf("the number is positive  \n");
    
    
 
return 0;
}