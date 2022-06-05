#include<stdio.h>
main(){
int T[10];
int i,Nr,S;
float Mes;
printf("Numri i te dhenave:   ");
scanf("%d",&Nr);
if (Nr>10){
printf("Deri ne 10numra mund te trajtohen\n");
}else
{printf("Fusni numrat:");
S=0;
for(i=0;i<Nr;i++){
scanf("%d",&T[i]);
S=S+T[i];}
Mes=(S/Nr);
printf("Mesatarja aritmetike = %f\n",Mes);
printf("Lista e numrave me te medhenj se mesatarja\n");
for(i=0;i<Nr;i++)
if (T[i]>Mes)
printf("%d\n",T[i]);
}
}
