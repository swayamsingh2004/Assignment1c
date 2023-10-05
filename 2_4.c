#include <stdio.h>
void compare_max(int a,int b,int c){
 if(a>b){
    if(a>c)
    printf("%d has max integer value among them \n",a);
    else 
    printf("%d has max integer value among them \n",c);
 }
 if(b>a){
    if(b>c)
    printf("%d has max integer value among them \n",b);
    else 
    printf("%d has max integer value among them \n",c);
 }
}
void compare_min(int a,int b,int c){
 if(a<b){
    if(a<c)
    printf("%d has min integer value among them \n",a);
    else 
    printf("%d has min integer value among them \n",c);
 }
 if(b<a){
    if(b<c)
    printf("%d has min integer value among them \n",b);
    else 
    printf("%d has min integer value among them \n",c);
 }
 }
int main(){
    int x,y,z;
    printf("Enter your 3 integers \n");
    scanf("%d %d %d",&x,&y,&z);
    compare_max(x,y,z);
    compare_min(x,y,z);
   return 0;
}