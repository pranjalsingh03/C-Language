// Write a programe to check weather entered number is divisible by 2 and 8 both 

#include<stdio.h>

int main(){
    int a;
    printf("Enter the number ");
    scanf("%d",&a);
    if (a%2==0 &&a%8==0)
    printf("%d is divisible by both 2 and 8",a);
    else
    printf("%d is not divisible by both 2 and 8",a);


}