#include<stdio.h>
int main()
{
    float value;
    printf("Enter value beween -1000 and 1000 = ");
    scanf("%f",&value);
    int integer_form = (int)value;
    float difference = value - integer_form;
    printf("Original Value = %.2f",value);
    printf("\nThe converted value = %d",integer_form);
    printf("\nDifference = %.2f",difference);
    return 0;
}