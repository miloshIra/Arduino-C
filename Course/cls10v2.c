   #include <stdio.h>
    #include <stdlib.h>

    int isfrli_cifra (int broj, int cifra) {
    int posledna, ostanati;

    if ( broj == 0) {
        return broj;
    }
    posledna = broj % 10;
    ostanati = isfrli_cifra(broj/10, cifra);

    if (posledna == cifra) {

        return ostanati;

    } else {
        return ostanati *10 + posledna;
    }

    }



    int main()
    {
        int broj, cifra;

        printf("Vnesi broj: ");
        scanf("%d", &broj);

        printf("Vnesi cifra: ");
        scanf("%d", &cifra);

        int nov_broj = isfrli_cifra(broj, cifra);

        printf("Noviot broj e: %d", nov_broj);

        return 0;


    }
