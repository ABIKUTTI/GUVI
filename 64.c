#include<stdio.h>
int main()
{
int a,b,s;
printf("enter the two numbers ");
scanf("%d%d",&a,&b);
s=a+b;
printf("\n difference  between %d and %d=%d",a,b,s);
if(s%2==0)
{
printf("%d is even.",s);
}
else
{
printf("%d is odd.",s);
}
return 0;
}
