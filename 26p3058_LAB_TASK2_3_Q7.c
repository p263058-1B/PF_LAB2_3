#include<stdio.h>
int main()
{
 int subject_1;
 int subject_2;
 int subject_3;

printf("Enter marks of first suject = ");
scanf("%d",&subject_1);
printf("Enter marks of second subject = ");
scanf("%d",&subject_2);
printf("Enter marks of third subject = ");
scanf("%d",&subject_3);
 int total_marks = (subject_1 + subject_2 + subject_3);
int average = (subject_1 + subject_2 + subject_3)/3;
float frac_average = (float)(subject_1 + subject_2 + subject_3)/3;
printf("Total Marks = %d",total_marks);
printf("\nWhole Aaverage = %d",average);
printf("\nFractional Average = %.2f",frac_average);

 return 0;
}
