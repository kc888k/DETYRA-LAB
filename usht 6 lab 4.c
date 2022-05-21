#include<stdio.h>
int main()
{
	int a,b,c;
	printf("futni 3 numra:");
	scanf("%d%d%d",&a,&b,&c);
	if((a<b)&&(a<c)&&(b<c))
	printf("%d%d%d",c,b,a);
	if((a<c)&&(a<b)&&(c<b))
	printf("%d%d%d",b,c,a);
	if((b<a)&&(b<c)&&(a<c))
	printf("%d%d%d",c,a,b);
	if((b<c)&&(b<a)&&(c<a))
	printf("%d%d%d",a,c,b);
	if((c<a)&&(c<b)&&(a<b))
	printf("%d%d%d",b,a,c);
	if((c<b)&&(c<a)&&(b<a))
	printf("%d%d%d",a,b,c);
}
