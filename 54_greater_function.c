#include <stdio.h> 
#include <windows.h> 

int great(int,int);

int main()
{ int x,y;
system("cls");

printf("enter first value:  \n");
scanf("%d", &x);

printf("enter second value:  \n");
scanf("%d", &y);


  great(x,y);
  
  return 0;
}

int great(int a,int b){
int n;
  if (a>b)
  {n=a;
    printf("%d  \n",a);
    
  }
  else
  {n=b;
    printf("%d  \n",b);
    
  }
  
  return n;

}