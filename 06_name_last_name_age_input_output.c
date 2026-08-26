#include <stdio.h> 

int main()
{ 
    char first_name[73];
    char last_name[73];
    int age;

   printf("enter your first name :  \n");
   scanf("%s", &first_name);
   
   printf("enter your last name :  \n");
   scanf("%s", &last_name);

   printf("enter your age  \n");
   scanf("%d", &age);
   
    
   

   printf("name : %s %s \n", first_name,last_name);
   printf("age: %d  \n",age);
   
   

   
    
    
 
return 0;
}