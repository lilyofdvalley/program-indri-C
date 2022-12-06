#include <stdio.h>

int main()
{
    int N,M,F=1;
    
    printf("\t=======================================================\n");
    printf("\t|             Algoritma & Pemrograman                 |\n");
    printf("\t|                                                     |\n");
    printf("\t|          Menghitung nilai N-Faktorial               |\n");
    printf("\t-------------------------------------------------------\n");
    printf("\t|                     Oleh                            |\n");
    printf("\t|           Putu Indri Cahyani       2205551097       |\n");
    printf("\t=======================================================\n");

    printf ("Masukkan nilai N: ");
    scanf ("%d",&N);


        for (M=1; M<=N; M+=1){
            F *= M;

        }printf (" N!=%d \n",F);

    return 0;
}
