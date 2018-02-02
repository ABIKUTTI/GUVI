#include<stdio.h>
int main()
{
int number,remainder,count =0;
printf("\n Please enter any number \n"):
scanf("%d",& number);
while(number>0)
{
number=number/10;
count=count+1;
}
printf("\n number of digits in a given number=%d",count);
return 0;
}
