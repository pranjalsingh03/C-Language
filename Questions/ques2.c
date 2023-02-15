//Write a programe to check weather the entered chareacter is vowel or not 

#include<stdio.h>

int main(){
    char a;
    printf("Enter the character ");
    scanf("%c",&a);
    if (a=='a'||a=='A'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
    printf("Enter character is vowel");
    else
    printf("Enter character is not vowel");
}