#include <stdio.h>
main(){
 float  temp[365]; 
 int i; 
 int dite;
 printf("Jep elementet e vektorit\n\n");
for(i=0;i<365;i++)
scanf("%f", &temp[i]);
for(i=0;i<365;i++){
	if(temp[i]==30.0)
	printf("Po ka dite me temperature 30.0 grade\n ");
	else
	printf("Jo nuk ka dite me temperature 30.0 grade\n ");
  }	
}
