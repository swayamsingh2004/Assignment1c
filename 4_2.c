#include <stdio.h>
int main(){
    int i,sum=0,n;
    printf("Enter the Integer Number:");
    scanf("%d", &n);
    do{
        i=n%10;
        n=n/10;
        sum+=i;

    }while(n!=0);
    printf("sum of the digits is %d", sum);

    return 0;


}