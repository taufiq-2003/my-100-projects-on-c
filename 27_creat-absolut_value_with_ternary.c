#include <stdio.h> 

int main()
{ 
    int number;
    printf("enter number  \n");
    scanf("%d", &number);
    
    int result = number<0 ? -number:number;
 
    printf("the absolute number of your number is %d  \n",result);

    // alternative way
    printf("%d is the absolute value of your number  \n",(number<0 ? -number:number));
    
    


return 0;
}