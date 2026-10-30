#include <stdio.h> 

int main()
{ 
    int num;
    int *ptr = &num;

    printf("please enter a number :  \n");
    scanf("%d", ptr);
    
     
    printf("the number is %d ", *ptr);
    printf("the number is %d ", num);

 
return 0;
}