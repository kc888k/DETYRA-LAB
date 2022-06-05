#include <stdio.h>
main(){
	int V[7]={4, 2, 0, 1, 5, 3, 6};
	int max;
	int poz;
	int i;
	max=V[0]; 
	poz=0;
for(i=1; i<7; i=i+1){
	if(V[i]>=max){
	max=V[i];
	poz=i;
   }
 }
printf("Maksimumi eshte %d dhe pozicioni i tij eshte %d", max, poz);
}
