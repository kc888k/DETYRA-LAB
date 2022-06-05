#include <stdio.h>
main() {
int n, s=0, m, count=0;
printf("Jep nje numer ");
scanf("%d", &n);
do{
	m=n%10;
	s=s+m;
 	n=n/10;
	++count;
} while(n!=0);
printf("\nShuma e shifrave eshte %d dhe Numri i shifrave te tij eshte %d  ", s, count);

}
