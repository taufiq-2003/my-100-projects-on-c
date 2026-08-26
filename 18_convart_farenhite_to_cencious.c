#include <stdio.h> 

int main()
{ 
   float fhereheight,celsius;
   printf("enter temperature in fhereheight:   \n");
   scanf("%f", &fhereheight);
   
    celsius = (fhereheight-32)*5/9;

    printf("the temperature in celsius is %.2f  \n",celsius);
    
 
return 0;
}