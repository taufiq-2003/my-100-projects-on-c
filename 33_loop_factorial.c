#include <stdio.h> 

int main()
{ 
   int number;
   printf("welcome to calculating factorial numbers  \n");
   
   printf("enter the number:  \n");
   scanf(" %d", &number);

    int a=1;
   for (int i = 1; i <=number; i++)
   {
    a=a*i;
    
   }
   
   printf("%d  \n",a);
   
 
return 0;
}