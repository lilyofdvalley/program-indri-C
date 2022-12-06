#include <stdio.h>

int main()
{
    int N,M,F=1;

    printf ("Masukkan nilai N: ");
    scanf ("%d",&N);


        for (M=1; M<=N; M+=1){
            F *= M;

        }printf (" N!=%d \n",F);

    return 0;
}
