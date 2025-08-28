#include <stdio.h>
int main() {
float P, R, N, I;
printf("Enter Principal (P)=");
scanf("%f",&P);
printf("Enter rate(in%) =");
scanf("%f" ,&R);
printf("Enter time(in year)=");
scanf("%f" ,&N);
I = (P * R * N) / 100.0f;
printf("Interest = %.2f\n", I);
return 0;
}