#include<stdio.h>
int main()
{
 int a,b,i,j,sum=0;
 scanf("%d %d",&a,&b);
 m:
 if(b<=0)
 {
    scanf("%d",&b);
    goto m;
 }

    for(i=a,j=1;j<=b;i++,j++)
    {
        sum=sum+i;
    }

  printf("%d\n",sum);
  return 0;
  }
