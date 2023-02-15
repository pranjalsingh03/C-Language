// Write a program to check weather the enter number is even or odd number

#include<stdio.h>

int main(){
    int a;
    printf("Enter the number ");
    scanf("%d",&a);
    if (a%2==0)
    printf("%d is even number",a);
    else
    printf("%d is odd nuuber ",a);
    return 0;
}