#include<stdio.h>
int main()
{
 int total_pennies = 368;
int quarter;
int dimes;
int nikel;
int rest;
int pennies;
 
quarter =total_pennies/25;
rest = total_pennies % 25;

// from % we wil get 18 remainig pennies.
// deviding remaing by 10 we will get quantized dimes.

dimes = rest/10;
rest = rest % 10;
 // from rest we will get 8 remainder.

nikel = rest / 5;
rest = rest % 5;
// from this rest we will get reminder 3 which is 3 pennies.

pennies = rest;
printf("total pennies = %d",total_pennies);
printf("\nQuarter = %d",quarter);
printf("\nDimes = %d",dimes);
printf("\nNikel = %d",nikel);
printf("\n Pennies = %d",rest);


return 0;
}