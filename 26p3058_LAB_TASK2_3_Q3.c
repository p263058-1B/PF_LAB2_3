#include<stdio.h>
int main()
{
// sapt = sallary after paying tax.
  float sallary,tax_rate,tax_amount,sapt;
  
  printf("Enter sallary = ");
  scanf("%f",&sallary);
  
  printf("Enter tax rate = ");
 scanf("%f",&tax_rate);

 tax_amount = sallary*(float)tax_rate/100;
 sapt = sallary - tax_amount;

  printf("Tax amount = %.2f",tax_amount);
 printf("\nSallary after paying tax = %.2f",sapt);
  
 return 0;
}
