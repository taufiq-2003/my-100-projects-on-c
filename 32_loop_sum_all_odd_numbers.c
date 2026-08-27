#include <stdio.h> 

int main()
{ 
   int number;
   printf("welcome to summing odd numbers  \n");
   
   printf("enter the number:  \n");
   scanf(" %d", &number);
    int a=0;
   for (int i = 1; i <=number; i+=2)
   {
    a=a+i;
    
   }
   
   printf("%d  \n",a);
   
 
return 0;
}