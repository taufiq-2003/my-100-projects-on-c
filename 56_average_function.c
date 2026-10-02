#include <stdio.h> 

float avg();

int main()
{ 
  
float z= avg();
  printf("the average is :%.2f  ",z);
  
  
  return 0;
}

float avg(){
float sum = 0;
float b;
float a;
  for (int i = 0; i < 5; i++)
  {
    printf("enter a number:  \n");
    scanf("%f", &a);
    
    sum=sum+a;
  }

  b=sum/5.0;
  
  return b;
}