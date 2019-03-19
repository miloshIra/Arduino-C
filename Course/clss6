#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int matrica [MAX][MAX];
    int i, k, redici, koloni;

    printf("Vnesete broj na redici i koloni: ");
    scanf("%d %d", &redici, &koloni);

    for (i = 0; i < redici; i++) {
        for (k = 0; k < koloni; k++) {
            printf("Vnesi go elementot na pozicija [%d][%d]: \n", i, k);
            scanf("%d", &matrica[i][k]);    // Vaka sekogas se vnesuvaat matrici!!
        }
    }
    int kraj = 0;
    for (i=0; i < redici; i++) {
        for (k=0; k < koloni; k++) {
            if (matrica[i][k] != matrica[k][i]) {
                    printf("Matricata ne e simetrichna\n");
                kraj = 1;
                break;
            }
        }
        if (kraj == 1) {
            break;
        }
    }
        if (i == k) {
            printf("Matricata e simetrichna\n");
    }
   /* for (i = 0; i < redici; i++) {
        for (k = 0; k < koloni; k++) {
            if (i+k > koloni/2) {
                printf("%d\t", 2*matrica[i][k]);
            } else {
            printf("%d\t", matrica[i][k]);
        }
        printf("\n");  // pecatenje na dolnata matrica samo!
    }
    */
    return 0;
    }
