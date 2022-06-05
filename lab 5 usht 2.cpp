#include <stdio.h>

main() {
int n, s=0, m, count=0;
printf("Jep nje numer ");
scanf("%d", &n);
do{
n /= 10;
++count;
} while(n!=0);
printf("Ky numer ka %d shifra", count);
while(n!=0){
  m=n%10;
  s=s+m;
  n=n/10;	
  }
  printf("\nShuma e shifrave eshte %d", s);
}
