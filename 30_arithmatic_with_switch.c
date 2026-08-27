#include <stdio.h> 

int main()
{ float num1,num2;

   char number;

   printf("enter first number :  \n");
   scanf("%f", &num1);
   printf("enter second number :  \n");
   scanf("%f", &num2);
   printf("enter valid operators (+,-,*,/)  \n");
   scanf(" %c", &number);
   
    
   switch (number)
   {
   case '+': printf("%.2f+%.2f=%.2f  \n",num1,num2,num1+num2);
    break;
   case '-': printf("%.2f-%.2f=%.2f  \n",num1,num2,num1-num2);
    break;
   case '*': printf("%.2f*%.2f=%.2f  \n",num1,num2,num1*num2);
    break;
   case '/': printf("%.2f/%.2f=%.2f  \n",num1,num2,num1/num2);
    break;
   
   
   default:printf("invalid operators enter valid operators (+,-,*,/)   \n");
   
    break;
   }
 
return 0;
}