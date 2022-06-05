#include <stdio.h>
main(){
	int V[7]={4, 2, 0, 1, 5, 3, 6};
	int min;
	int poz;
	int i;
	min=V[0];
	poz=0;
for(i=1; i<7; i=i+1){
	if(V[i]<=min){
	min=V[i];
	poz=i;
}
}
printf("Minimumi eshte %d dhe pozicioni i tij eshte %d", min, poz);
}
