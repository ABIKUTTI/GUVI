#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("ENTER THE LIMIT");
scanf("%d %d",&a,&b);
printf("ENTER THE NUMBER TO BE CHECKED");
scanf("%d",&c);
if((c<<a)||(c<b))
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
