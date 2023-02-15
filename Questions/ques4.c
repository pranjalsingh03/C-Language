// Write a programe to check weather entered number is divisible by both 5 and 2

#include<stdio.h>

int main(){
    int a;
    printf("Enter the number ");
    scanf("%d",&a);
    if (a%5==0 &&a%2==0)
    printf("%d is divisible by both 5 and 2",a);
    else
    printf("%d is not divisible by both 5 and 2",a);


}