#include <stdio.h> 

int main()
{ 
   int number;
   printf("enter the students number:  \n");
   scanf("%d", &number);

   if (number>=90)
   {
    printf("congratulation! you have obtained grade A  \n");
    
  }
  else if (number>=75)
  {
    /* code */
    printf("congratulation! you have obtained grade B   \n");
  }
  
  else if (number>=60)
  {
    /* code */
    printf("congratulation! you have obtained grade C   \n");
  }
  
  else if (number>=30)
  {
    /* code */
    printf("congratulation! you have obtained grade D   \n");
  }
  
  else
  {
    /* code */
    printf("sorry you have failed the exam   \n");
  }
    
 
return 0;
}