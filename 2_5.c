#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Enter the value of c:");
    scanf("%d", &c);
    printf("Enter the value of d:");
    scanf("%d", &d);
    if(a>b){
         if(a>c){
             if(a>d){
              printf("%d has max value among these \n",a);}
               else{
                 printf("%d has max value among these \n",d);
                 }
}
    }
if(b>a){
     if(b>c){
         if(b>d){
          printf("%d has max value among these \n",b);}
           else{
             printf("%d has max value among these \n",d);
 } 
}
if(c>a){
     if(c>b){
         if(c>d)
          printf("%d has max value among these \n",c);
           else
            printf("%d has max value among these \n",d);
 } 
}
}
}