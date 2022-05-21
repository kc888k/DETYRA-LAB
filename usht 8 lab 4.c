#include<stdio.h>
int main()
{
	float shuma;
	float fatura;

	printf("Futni shumen kejsi:");
	scanf("%f",shuma);
	fatura=0.92*shuma;
	if(shuma>1000)	
	printf("%f Fatura juaj eshte\n",fatura);	
	else
	printf("Fatura juaj eshte:%f",shuma);
}
