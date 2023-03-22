#include<stdio.h>

int main(){
    int a[7] ,i , n, sum;
    printf("Enter the  number of elements");
    scanf("%d",&n);
    printf("\n Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum = sum+ a[i];
    }
    printf("Sum of the array =%d",sum);
    }