#include <stdio.h> 

int incr(int);

int main()
{ 
  int j=7;
  
  
  int b =incr(j);
  printf("%d  \n",b);
  
  
  return 0;
}

int incr(int n){
n++;

return n;

}