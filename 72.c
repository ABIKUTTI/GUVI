#include <stdio.h>
#include <conio.h>
void main()
{
	char c[100];
	int len,i,vow=0;
	clrscr();
	printf("\nEnter a string: ");
	gets(c);
	len=strlen(c);
	for(i=0;i<len;i++)
	{
                        if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
			vow=vow+1;
	}
	printf("\nThere are  %d vowels in the string",vow);
	getch();
}
