#include <stdio.h>

int main (){
  float principle,time,interest_rate;

  printf("enter the amount of the principle  \n");
  scanf("%f", &principle);
  
   

  printf("enter the period of time:  \n");
  scanf("%f", &time);
  
   
  
  printf("enter the interest rate in percentage:");
  scanf("%f", &interest_rate);
  
   
printf("your interest is %.2f  \n",(principle*time*interest_rate)/100);



  return 0;
}