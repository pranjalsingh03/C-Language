#include<stdio.h>

struct job{
    char name[32];
    double salary;
}u = {"John", 1000.00};

union job1
{
    char name[32];
    double salary;
}u1 = {"Rohan"};

int main(){
    printf("%s\n", u.name);
    printf("%s\n", u1.name);
    printf("%f\n", u.salary);
    scanf("%f",&u1.salary);
    printf("%f\n", u1.salary);
    printf("%d\n", sizeof(u));
    printf("%d", sizeof(u1));
return 0;
}