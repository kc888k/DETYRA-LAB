#include <iostream>
#define N 4
main()
{
    int v[N];int i;int sp,sn,zero,np,neg;
    for (i=0; i<N; i++)
        {
            printf("jepni vleren e elementin me index %d =", i);
    scanf("%d", &v[i]);
    }
    sp=0; sn=0;zero=0;np=0;neg=0;
    for (i=0; i < N; i++)
        {
            if(v[i] < 0)
                {
                    sn+=v[i];neg++;
    }
     else
        if(v[i] > 0)
        {
            sp+=v[i];np++;
     }
     else zero++;
     }
      printf("Shuma e numra pozitive eshte =%d\n", sp);
      printf("Sasia e numra pozitive eshte =%d\n", np);
      printf("Shuma e numra negative eshte =%d\n", sn);
      printf("Sasia e numra negative eshte =%d\n", neg);
      printf("sasia e zerove =%d\n", zero);
      }

