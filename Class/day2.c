#include<stdio.h>
int main()
{
int a,b,sum,mul,sub;
int choice;
printf("Press 1 for add\n");
printf("Press 2 for sub\n");
printf("Press 3 for mul\n");
printf("enter your choice=");
scanf("%d",&choice);
printf("enter your inputs=");
scanf("%d%d",&a,&b);
if(choice==1)
{
sum=a+b;
printf("sum=%d",sum);
}
else if(choice==2)
{
sub=a-b;
printf("sub=%d",sub);
}
else if(choice==3)
{
mul=a*b;
printf("mul=%d",mul);
}
else
printf("invalid choice");
return 0;
}




#include<stdio.h>
int main()
{
int a,b,res;
int choice;
printf("Press 1 for add\n");
printf("Press 2 for sub\n");
printf("Press 3 for mul\n");
printf("enter your choice=");
scanf("%d",&choice);
if(choice==1)
{
printf("enter your inputs=");
scanf("%d%d",&a,&b);
res=a+b;
printf("sum=%d",res);
}
else if(choice==2)
{
printf("enter your inputs=");
scanf("%d%d",&a,&b);
res=a-b;
printf("sub=%d",res);
}
else if(choice==3)
{
printf("enter your inputs=");
scanf("%d%d",&a,&b);
res=a*b;
printf("mul=%d",res);
}
else
printf("invalid choice");
return 0;
}