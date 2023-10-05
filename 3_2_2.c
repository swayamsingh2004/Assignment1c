#include <stdio.h>
int main(){
    int sum=1,n;
    printf("Enter the value of n:");
    scanf("%d", &n);
 for(int i=5;i<=n;i+=5){
         sum = sum + i;
        }
        printf("Sum of the series(S) is : %d\n",sum);
}
