#include <stdio.h>
int main(){
    float principal,interest,time,si;
    printf("Enter the principal amount:\n");
    scanf("%f", &principal);
    printf("Enter the time(IN YEARS):\n");
    scanf("%f", &time);
    printf("Enter the INterest rate:\n");
    scanf("%f", &interest);
    si=(principal*time*interest)/100;
    printf("simple interest is %f" ,si);
    return 0;

}
