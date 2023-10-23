#include <stdio.h>
#include <math.h>

int main() {
float a, b, x, z; // Переменные для a, b, x для ввода, z для расчета и вывода
printf ("Enter the value of the variable a:");
scanf ("%f", &a);
printf ("Enter the value of the variable x:");
scanf ("%f", &x);
printf ("Enter the value of the variable b:");
scanf ("%f", &b);
if (x<=a) {
z = fabs(x) + sin(x); // При x <= a выполняется данная формула
printf ("Function value z = fabs(x) + sin(x): %e", z);
} else {
printf ("Error! 'a' should be <= 'x'");
}
return 0;
}

/*
else if (a < x < b) {
z = cos(pow(x,2)); // При a < x < b выполняется данная формула
printf ("Function value z = cos(pow(x,2)): %e", z);
} else {
z = tan(x); // Если первые 2 неверны, выполняется данная формула
printf ("Function value z = tan(x): %e", z);
}
*/