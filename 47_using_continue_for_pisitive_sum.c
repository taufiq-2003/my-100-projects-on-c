#include <stdio.h> 

int main()
{ 
   int sum=0;
   int n=1;
   
    
    for (; n!=0 ;)
    {
      printf("enter a number:  \n");
    scanf("%d", &n);

    if (n<0)
    {
      continue;
    }
    

    sum=sum+n;
    }

    printf("the sum is %d  \n",sum);
    
    
 
return 0;
}