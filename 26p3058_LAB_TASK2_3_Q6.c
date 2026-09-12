#include <stdio.h>

int main() 
{ 
    int a,b;
    
    printf("Enter first number(a) = ");
    scanf("%d",&a);
    printf("Enter second number(b) = ");
    scanf("%d",&b);
    float part_a = a/b;
    float part_b = (float)a/b;
    float part_c = (float)(a/b);
    printf("part A = %.2f",part_a);
    printf("\nPart B = %.2f",part_b);
    printf("\nPart C = %.2f",part_c);
    return 0;
    
}