#include <stdio.h>
#define N 4
int main()
{
    int V[N];int i;int A[N];
    for (i=0; i<N; i++)
        {
            printf("jepni vleren e elementin me index %d =", i);
    scanf("%d", &V[i]);
    }
    for (i=0; i < N; i++)
        {
            A[i]=3*V[i];
    }
     printf("Elementet e vektorit A jane:\n");
     for (i=0; i < N; i++)
        {
            printf(" %d", A[i]);printf("\n");
     }
     return 0;
     }
