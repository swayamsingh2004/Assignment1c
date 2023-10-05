#include<stdio.h>
int serie(int n){
    int sum = 1,i=0;
 do {
    sum+=5*i;
    i++;
 }
 while (i<n);
printf("Sum of the series upto N terms is : %d",sum);
return 0;
}
 int main() {
    int n ;
    printf("Enter value of 'N' (sum utpo N terms ) \n");
    scanf("%d",&n);
    serie(n);
    return 0;

 } 