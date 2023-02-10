#include<stdio.h>

int main(){
    int a,b;
    printf("enter the value of a:%d",a);
    scanf("%d",&a);
    printf("enter the value of b :%d",b);
    scanf("%d",&b);
    printf("values before swapping\n");
    printf("a=%d\tb=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\nvalues after swapping\n");
    printf("a=%d\tb=%d",a,b);
    return 0;

}