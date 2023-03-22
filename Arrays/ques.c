//To print all the even number in the array

#include <stdio.h>

int main(){
    int a[7] ,i , n;
    printf("Enter the  number of elements");
    scanf("%d",&n);
    printf("\n Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n The elements are\n");
    for(i=0;i<n;i++){
        if (a[i]%2==0)
        printf("%d\t%u\n",a[i],&a[i]);
    }}