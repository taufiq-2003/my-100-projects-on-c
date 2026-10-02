#include <stdio.h> 
#include <time.h>
#include <windows.h>

void print_time();

int main()
{ 
  print_time();
  
  return 0;
}


void print_time(){

  system("cls");
  time_t current_time;

  time(&current_time);

  char* date =asctime(localtime(&current_time));

  printf("the date and time is %s  \n", date);
  
  Sleep(3000);
system("pause");
}