#include <stdio.h> 

int main()
{ 
   const float pi= 3.1416;
   float rad; 

   printf("radius :  \n");
   scanf("%f", &rad);

   printf("the circumference of a circle is %.3f  \n",rad*pi*2);

   printf("the area of the circle is : %.3f   \n", pi*rad*rad);
   
   
    
   
 
return 0;
}