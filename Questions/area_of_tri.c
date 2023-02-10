#include<stdio.h>

int main(){
    float a,b,c,area;
    c=0.5;
    printf("Enter base: %f",a);
    scanf("%f",&a);
    printf("Enter Heigth: %f",b);
    scanf("%f",&b);
    // area=(a*b)*c;                               true
    // area=1/2*a*b;                               zero
    // area= (1/2.0)*a*b;                          true
    // area=1.0/2*b*a;                             true
    // area=(1.0/2.0)*a*b;                         true
    // area=(float)(1/2)*b*a;                      zero
    printf("Area of triangle is: %f",area);
    return 0;
}