#include<stdio.h>
int main()
{
int a,b,d;
printf("enter the two numbers ");
scanf("%d%d",&a,&b);
if(a>b)
d=a-b;
else
d=b-a;
printf("\n difference  between %d and %d=%d",a,b,d);
if(d%2==0)
{
printf("%d is even.",d);
}
else
{
printf("%d is odd.",d);
}
return 0;
}
