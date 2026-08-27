#include <stdio.h> 


int main()
{ 
    int number;
    printf("enter your number:  \n");
    scanf("%d", &number);

   

    int result = number%2==0 ? printf("the number you entered is even\n")
                             : printf("the number you entered is odd  \n");

return 0;
}