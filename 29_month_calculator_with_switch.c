#include <stdio.h> 

int main()
{ int month;
   printf("pleas enter your month  \n");
   scanf("%d", &month);
   
   
   switch (month)
   {
   case 1:printf("january  \n");
   break;
   case 2:printf("feb \n");
   break;
   case 3:printf("march  \n");
   break;
   case 4:printf("april  \n");
   break;
   case 5:printf("may  \n");
   break;
   case 6:printf("jun  \n");
   break;
   case 7:printf("july  \n");
   break;
   case 8:printf("august  \n");
   break;
   case 9:printf("september  \n");
   break;
   case 10:printf("october  \n");
   break;
   case 11:printf("nov  \n");
   break;
   case 12:printf("dec  \n");
   break;
   
   default:printf("invalid input. valid input is (1-12)  \n");
   
    break;
   }
 
return 0;
}