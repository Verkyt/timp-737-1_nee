#include "stdlib.h"
#include "stdio.h"
#include "math.h"

int main()
{
int i,x,n,sum=0,sredzn=0;
scanf("%d",&n);
for (i=0;i<n;i++){
scanf("%d",&x);
sum=sum+x;
}
sredzn=sum/n;
printf("%d",sredzn);
return 0;
}
