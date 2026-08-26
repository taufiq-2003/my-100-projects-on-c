#include <stdio.h>

int main (){

  int base;
  int height;

  printf("enter the base ofd the triangle :  \n");
  scanf("%d", &base );
  
   printf("enter the height of the top from the base of the triangle:  \n");
   scanf("%d", &height);
   
    printf("the area of the triangle is %.2f  ",0.5*base*height);
    



  return 0;
}