#include <stdio.h> 

int main()
{ 
   int number;
   printf("enter the number :  \n");
   scanf("%d", &number);
   
   
   for (int  i = 1; i < 11; i++)
   {
    printf("%d X %d = %d  \n",i,number,i*number);
    
   }
   
   
 
return 0;
}