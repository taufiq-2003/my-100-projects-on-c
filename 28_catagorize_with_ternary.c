#include <stdio.h> 

int main()
{ 
   int number;
   printf("enter your number  \n");
   scanf("%d", &number);

   printf("the student category is   \n");

  number >=80 ? printf("high  \n"):(number>=50? printf("moderate  \n"):printf("low  \n"));
  
   
    
 
return 0;
}