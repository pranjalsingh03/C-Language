#include<stdio.h>
#include<math.h>

int main(){
    int r;
    float pi,area;
    pi=3.14;
    int *r1;
    float *area1;
    // *area1=area;
    r1=&r;
    
    printf("Enter Radius of circle:");
    scanf("%d",r1);
    *area1=pi*(pow(*r1 ,2));
    area=pi*r*r;
    printf("Area of circle is: %2f",*area1);
        printf("Area of circle is: %2f",area);

}