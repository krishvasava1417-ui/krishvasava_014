#include <stdio.h>
int main() {
int a, b, temp;
printf("Enter a integer= ");
scanf("%d", &a);
printf("Enter b integer=");
scanf("%d",&b);
printf("Before swap: a = %d, b = %d\n", a, b);
temp = a;
a = b;
b = temp;
printf("After swap: a = %d, b = %d\n", a, b);
return 0;
}