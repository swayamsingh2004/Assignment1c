#include <stdio.h>
#include <math.h>
int main(){
    int sum=0,i=1,n,x;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        x=pow(2,i);
        sum=sum+x;
    }
    

    printf("Sum is %d",sum);

}