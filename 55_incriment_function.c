#include <stdio.h> 

int incr(int);

int main()
{ 
  int j=7;
  
  
  incr(j);
  printf("%d  \n",j);
  
  
  return 0;
}

int incr(int n){
n++;

return n;

}