#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int l,n,w,h,i;
scanf("%d",&l);
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d%d",&w,&h);
if(w<l||h<l)
printf("UPLOAD ANOTHER\n");
else
{
if(w==h)
printf("ACCEPTED\n");
else
printf("CROP IT\n");
}
}

return 0;
}




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int l,r,k,i=0,count=0;
scanf("%d%d%d",&l,&r,&k);
for(i=l;i<=r;i++)
{
if(i%k==0)
count++;
}
printf("%d",count);

return 0;
}