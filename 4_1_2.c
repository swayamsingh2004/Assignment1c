#include <stdio.h>
int main(){
    int i,j,space,n;
    printf("enter the value of n:");
    scanf("%d", &n);

   for(i=1;i<=n;i++){
   for(space=1;space<=(n-i);space++){
         printf(" ");
    }
    for(j=1;j<=(2*i)/2-1/2;j++){
        int x=j%10;
        printf("%d",x);
    }
    for(j=i-1;j>=1;j--){
        int x=j%10;
        printf("%d",x);
    }
printf(" \n");
   }
  
}

