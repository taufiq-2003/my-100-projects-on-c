#include <stdio.h>
#include <windows.h>

int main(){


  system("cls");
  char character ;
  printf("welcome to showcasing character pointer \n");
  printf("enter a character\n");

  char *anything = &character;
  scanf("%c", anything);

  printf("the character rou entered is %c", *anything);
  printf("the character rou entered is %c", character);

  system("pause");


  return 0;
}