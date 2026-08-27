#include <stdio.h> 

int main()
{ 
   int age;
   printf("enter your age:  \n");
   scanf("%d", &age);

   if (age<=13)
   {
    printf("you are a chile  \n");
    
   }
   else if (age<=20)
   {
    printf("you are a teen  \n");
    
   }
   
   else if (age<=60)
   {
    printf("you are a Adult  \n");
    
   }
   
   else 
   {
    printf("you are a Senior  \n");
    
   }
 
return 0;
}