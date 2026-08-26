#include <stdio.h>
#include <math.h>

int main (){
  float principle,time,interest_rate;

  printf("enter the amount of the principle  \n");
  scanf("%f", &principle);
  
   

  printf("enter the period of time:  \n");
  scanf("%f", &time);
  
   
  
  printf("enter the interest rate in percentage:");
  scanf("%f", &interest_rate);

  float interest = principle*pow((1+interest_rate/100),time);
  
   
printf("your compound interest is %.2f  \n",interest);



  return 0;
}