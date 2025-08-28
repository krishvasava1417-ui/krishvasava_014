#include <stdio.h>
int main() {
float subject1, subject2, subject3, total, avg;
printf("Enter mark of  subject one= ");
scanf("%f", &subject1);
printf("Enter mark of subject two=");
scanf("%f", &subject2);
printf("Enter mark of subject three=");
scanf("%f", &subject3);
total = subject1 + subject2 + subject3;
avg = total / 3.0f;
printf("Total = %.2f\n", total);
printf("Average = %.2f\n", avg);
return 0;
}