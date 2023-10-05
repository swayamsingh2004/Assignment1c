#include <stdio.h>
int main(){
    float a,b;
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("enter the value of b:");
    scanf("%f", &b);
     if(a>b){
        printf("sum is %f", a+b);
     }
     else{
        printf("subraction is %f", b-a);}

        return 0;
}