#include<stdio.h>
#include<conio.h>
void main()
{
int n,mul=1,t;
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
t=n%10;
mul=mul*t;
n=n/10;
}
printf("The products of digit is %d",mul);
}
