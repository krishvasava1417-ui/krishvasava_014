#include <stdio.h>
int main() {
float H, L, A;
printf("Enter height (H) = ");
scanf("%f", &H);
printf("Enter base (L)=");
scanf("%f", &L);
A = (H * L) / 2.0f;
printf("Area = %.2f\n", A);
return 0;
}