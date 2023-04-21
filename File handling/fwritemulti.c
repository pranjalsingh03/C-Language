#include<stdio.h>

struct student
{
    char name[20];
    int r;
}s[20];
int main(){
    FILE *fp;
    int n,i;
    printf("\nEnter total no of students\t");
    scanf("%d",&n);
    fp= fopen("asturct.txt","w");
    for (i=0;i<n;i++){
        printf("enter the name of students and roll no\n");
        scanf("%s%d",s[i].name,&s[i].r);
    }
    fwrite(&s,sizeof(s),1,fp);
    fclose(fp);
    fp = fopen("asturct.txt","r");
    printf("\nData in the file is :\n");
    fread(&s,sizeof(s),1,fp);
    for (i=0;i<n;i++){
        printf("\n%s",s[i].name);
        printf("\t%d",s[i].r);
        
    }
    fclose(fp);
}
