#include <stdio.h> 

int fibonacci(int pos);

int main()
{ 
  printf("elcome to fibonacci series printer using recursion  \n");
  printf("enter a number:     \n"); 
  int a;
  scanf("%d", &a);
  
  for (int  i = 0; i < a; i++)
  {
    printf("%d ",fibonacci(i));
    
    
  }
  
  
  
  
  return 0;
}

int fibonacci(int pos){
  if (pos<=1)
  {
    return pos;
  }
  
  int current = fibonacci(pos-1) + fibonacci(pos -2);
  return current;


}