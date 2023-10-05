#include <stdio.h>
#include <math.h>
int main()
{
   int a, b, c, d, x, y;
   printf("enter the value of a:");
   scanf("%d", &a);

   printf("enter the value of b:");
   scanf("%d", &b);

   printf("enter the value of c:");
   scanf("%d", &c);

   printf("your quadratic equations is %dx^2 %dx %d", a, b, c);

   d = (b * b) - (4 * a * c);
   printf("the value of d is %d\n", d);

   if (d == 0)
   {
      printf("roots are real");

      printf("the roots of the equation are:");
      x = (-b + (sqrt(d))) / (2 * a);
      y = (-b - (sqrt(d))) / (2 * a);
      printf("%f", x);
      printf("%f", y);
   }
   else if (d < 0)
   {
      printf("roots and imaginary");
      x = (float)(-b + (sqrt(d))) / (2 * a);
      y = (float)(-b - (sqrt(d))) / (2 * a);
      printf("%f", x);
      printf("%f", y);
   }

   else if (d > 0)
   {

      printf("roots are real and distinct");
      x = (float)(-b + (sqrt(d))) / (2 * a);
      y = (float)(-b - (sqrt(d))) / (2 * a);
      printf("%f", x);
      printf("%f", y);
   }

   return 0;
}