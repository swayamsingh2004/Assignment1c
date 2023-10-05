#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("Enter the value of b:");
    scanf("%f", &b);
    printf("Enter the value of c:");
    scanf("%f", &c);

    if(a>b && b>c){
        printf("A is the biggest");
    }
    else if(b>a && b>c){
        printf("b is the biggest");
    }
    else if (c>a && c>b){
        printf("c is the biggest");
    }
    return 0;
}