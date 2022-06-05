#include <iostream>
main()
{
int i;
double nr,shuma=0.0;

for(i=1;i<=10;++i)
{
    printf("shkruaj numrin %d:",i);
    scanf("%lf",&nr);

    //nese perdoruesi shtyp numer negativ,cikli nderpritet
    if(nr<0.0)
    {
        break;
    }

    shuma +=nr;//shuma=shuma + nr;
    }
    printf("Shuma=%.2lf",shuma);
    }
