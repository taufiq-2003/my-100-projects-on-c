#include <stdio.h> 

int main()
{ 
  printf("\n\nwelcome to all entered value calculator unless the last entered number is 0  \n");
  
   int number=1;
   int sum=0;

for ( ; number !=0; )
{printf("ther a number:  \n");

  scanf("%d", &number);

  sum=sum+number;
}

   printf("the total of the entered number is %d    \n",sum);
   
   
   
 
return 0;
}