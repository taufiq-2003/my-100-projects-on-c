#include <stdio.h> 

int add(int,int,int,int);

int main()
{ 
  printf("%d  \n",add(4, 6 ,3, 6 ));
  printf("%d  \n",add(47, 45, 26, 77 ));
  printf("%d  \n",add(2, 6, 4 ,8 ));
  
  
  return 0;
}

int add (int a,int b,int c,int d){
  int sum = a+b+c+d;

  return sum;
}