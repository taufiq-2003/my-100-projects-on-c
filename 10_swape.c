#include <stdio.h> 

int main()
{ 
    int a=54,b=22,temp;

    temp =  a;
    a =b;
    b =temp;

    printf("the new value of a  is %d    \n",a);
    printf("the new value of b  is %d    \n",b);
    
    
 
return 0;
}