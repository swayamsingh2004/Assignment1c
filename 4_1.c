#include <stdio.h>
int main(){
    int i,j,space,n;
    printf("enter the value of n:");
    scanf("%d", &n);
   for(i=1;i<=n;i++){
    for(space=1;space<=(n-i);space++){
        printf(" ");
    }
    for(j=1;j<=(2*i)-1;j++){
         printf("%c",64+j);
    }
printf(" \n");
   }
   
}
