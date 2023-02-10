#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the value of a ",a);
    scanf("%d",&a);
    printf("enter the value of b ",b);
    scanf("%d",&b);
    c=a>b?a:b;
    printf("%d is greater",c);
}