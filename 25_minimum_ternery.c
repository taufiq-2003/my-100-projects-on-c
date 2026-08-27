#include <stdio.h> 

int main()
{ 
    int a,b;
    printf("please enter the first number  \n");
    scanf("%d %d", &a, &b);
    
   int min = a<b ? a:b;
   printf("the minimum number is %d  \n",min);
   
    
 
return 0;
}