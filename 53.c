#include<stdio.h>
void main()
{
long num,temp,digit,sum=0;
printf("Enter the number \n");
scanf("%1d",&num);
temp=num;
while(num>0)
{
digit=num%10;
sum=sum+digit;
num/=10;
}
printf("Given number=%d\n",tempp);
printf("sum of the digits %1d=%1d\n",temp,sum);
}
