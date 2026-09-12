#include<stdio.h>
int main()
{
  int val1,val2;
   
  printf("Enter value number 1 = ");
  scanf("%d",&val1);
   
 printf("Enter value number 2 = ");
 scanf("%d",&val2); 
  
 val1 = val2;
 val2 = val1;
 
 printf("------------ RESULTS ---------------");
 printf("\n num1 = %d and num2 = %d",val1,val2);
 
 return 0;
 
 }
