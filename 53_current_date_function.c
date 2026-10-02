#include <stdio.h>
#include <time.h>
#include <windows.h>

void print_date();

int main (){
  
  print_date();
  
  return 0;
}

void print_date(){

system("cls");

time_t current_time;
time(&current_time);

char* date_string = asctime(localtime(&current_time));

printf("the current time is %s", date_string);

system("pause");
}