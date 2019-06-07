#include "stdlib.h"
#include "stdio.h"
#include "math.h"

int main()
{ 
int i,x,n,proiz=1;
scanf("%d", &n);
for(i=1;i<=n;i++)
{ 
scanf("%d", &x);
proiz=proiz*(x-i);
}
printf("%d\n", proiz);
return 0;
}
