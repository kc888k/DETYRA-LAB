#include<stdio.h>
void main()
{
	int num,mbetja;
	printf("jepni nje numer te plote:");
	scanf("%d",&num);
	mbetja=num%2;
	if(mbetja==0)
	printf("%d eshte numer cift\n",num);
	else
	printf("%d eshte numer tek\n",num);
}
