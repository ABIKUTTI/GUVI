#include<stdio.h>
void main()
{
float p,t,r,fl;
printf("Enter the principle amount,time,rate:");
scanf("%f %f %f",&p,&t,&r);
fl=(p*t*r)/100;
printf("the floor value is %f",fl);
}
