#include <stdio.h> 

int main()
{ 
   int num1,num2;
   printf("welcome to the LEAST COMMON MULTIPLE problem  \n");
   printf("enter the two numbers  \n");
   
   scanf(" %d %d", &num1,&num2);

int max = num1*num2;

int min = num1<num2 ? num1 : num2;

   int a;
   for (int i = min; i<= max ; i++)
   {
     a =i;

    if (i%num1==0 && i%num2==0)
    {
      break;
    }
    
   }
   printf("%d   \n",a);
   
 
return 0;
}