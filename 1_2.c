#include <stdio.h>
int main(){
    int tri1,tri2,tri3,rec1,rec2;
    printf("Enter side one of triangle:\n");
    scanf("%d", &tri1);
    printf("Enter 2nd one of triangle:\n");
    scanf("%d", &tri2);
    printf("Enter third one of triangle:\n");
    scanf("%d", &tri3);
    printf("Enter 1st side of rectangle\n");
    scanf("%d", &rec1);
    printf("Enter 2nd side of rectangle\n");
    scanf("%d", &rec2);

    printf("perimeter of triangle is %d \n",(tri1+tri2+tri3));
    printf("perimeter of rectangle is %d and area is %d",2*(rec1+rec2), rec1*rec2);

    return 0;
}