#include <stdio.h>
void main(void) 
{
	int digit=0,rem=0,n;
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%10;
		n=n/10;
		rem=digit%2;
	
		if(rem!=0)
		{
			printf("%d ",digit);
		}
	}
	getch();
}
