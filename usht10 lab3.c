#include <stdio.h>
int main()
{
int a,b,c,rezultati;
	a=5;
	b=5;
	c=10;
	rezultati=(a==b)&&(c>b);
	printf("(a==b)&&(c>b)e barabarte me%d\n",rezultati);
	rezultati=(a==b)&&(c<b);
	printf("(a==b)&&(c<b) eshte e barabarte me%d\n",rezultati);
	rezultati=(a==b)||(c<b);
	printf("(a==b)||(c<b) e barabarte me %d\n",rezultati);
	rezultati=(a!=b)||(c<b);
	printf("(a!=b)||(c<b) e barabarte me%d\n",rezultati);
	rezultati=!(a!=b);
	printf("!(a==b)e barabarte me%d\n",rezultati);
	rezultati=!(a==b);
	printf("!(a==b) e barabarte me%d\n",rezultati);
}
