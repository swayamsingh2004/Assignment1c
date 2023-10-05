 #include <stdio.h>
#include<math.h>
int main()
{
int x,n,i,c=1,z=0;
double sum;
printf("Enter value of 'n' : ");
scanf("%d",&n);
printf("Enter value for x : ");
scanf("%d",&x);
for(i=1;i<=n;i++)
{
  c*=i;
if((i%2)!=0)
{
  sum+=pow(-1,z)*(pow(x,i)/c);
z++;
}
}
printf("Sum of the series is : %.3lf",sum);
}