#include<stdio.h>
 int main()
{
 int num_hours,dist_travelled;
 
 printf("Enter distance in km = ");
 scanf("%d",&dist_travelled);

 printf("Enter number of hours = ");
 scanf("%d",&num_hours);
 
 float avg_speed = (float)dist_travelled/num_hours;
 printf("Average speed = %.2fkm/h",avg_speed);

 return 0;
}