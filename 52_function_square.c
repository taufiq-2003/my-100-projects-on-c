#include <stdio.h> 

int square();

int main()
{ 
  printf("welcome to square function  \n");
  int number;
  printf("enter the number  \n");
  scanf("%d", &number);
  
  printf("the square is %d  \n",square(number));
  
  
  return 0;
}
int square(int a){
  int ans = a*a;

  return ans;
}