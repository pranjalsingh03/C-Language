#include<stdio.h>

int main(){
    int a,c,mul,total,simple_interest;
    float b;
    printf("Enter Princpal Amount: %d",a);
    scanf("%d",&a);
    printf("Enter Rate in Percent: %f",b);
    scanf("%f",&b);
    printf("Enter Time in Years: %d",c);
    scanf("%d",&c);
    mul=a*b*c;
    simple_interest=mul/100;
    printf("Simple Interest is:%d\n",simple_interest);
    total=a+simple_interest;
    printf("Total Amount:%d",total);
    return 0;
}