#include<stdio.h>
#include<math.h>
int main()
{
float a;
float b;
float c;
printf("Enter the value of a = ");
scanf("%f",&a);
printf("Enter the vlaue of b = ");
scanf("%f",&b);
printf("Enter the value of c = ");
scanf("%f",&c);

float discriminant = (b*b)-(4*a*c);

if (discriminant > 0){
 float x1 = (- b + sqrt(discriminant))/(2*a);
 float x2 = (-b - sqrt(discriminant))/(2*a);
printf("Real Roots");
printf(" \nx1 = %+.2f and x2 = %+.2f",x1,x2);
printf("\nRequire Roots = (x%+.2f)(x%+.2f) = 0",-x1,-x2);
}
  else
printf("Imaginary roots");

return 0;

}