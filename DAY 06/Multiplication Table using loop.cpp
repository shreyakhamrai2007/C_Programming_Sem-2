#include<stdio.h>
int main()
{
	int i,num;
	printf ("Enter any number of which you want multiplication table :");
	scanf ("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf ("%d*%d=%d\n",num,i,num*i);
	}
	return 0;
}
