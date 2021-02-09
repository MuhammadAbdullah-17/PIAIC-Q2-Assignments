#include<stdio.h>
int main()
{
	int a[10],b,i;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	scanf("%d",&b);
	for(i=b-1;i>=0;i--)
	printf("%d",a[i]);
	for(i=b;i<10;i++)
	printf("%d ",a[i]);
	return 0;
}