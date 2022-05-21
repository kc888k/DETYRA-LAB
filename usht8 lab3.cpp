#include <stdio.h>
main()
{
int a = 5, c;
c = a;
printf("c = %d \n", c);
c += a; // c = c+a
printf("c = %d \n", c);
c -= a; // c = c-a
printf("c = %d \n", c);
c *= a; // c = c*a
printf("c = %d \n", c);
c /= a; // c = c%a
printf("c = %d \n", c);
c %= a; // c = c%a
printf("c = %d \n", c);
}
