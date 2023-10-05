#include <stdio.h>
int main(){
    int a,i,b,factorial;
    printf("Enter a number:");
    scanf("%d", &a);

    if(a==0){
        printf("factorial is 1");
    }
    else if(a>0){
        for (i = 1; i <= a; i++) {
            factorial *= i;
            
            }
            printf("factorial is %d", factorial);
    }
    else if(a<0){
        printf("factorial does not exist");

    }

}