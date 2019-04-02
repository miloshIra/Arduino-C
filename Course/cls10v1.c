    #include <stdio.h>
    #include <stdlib.h>

    int najdi_najgolemata_cifra (int broj) {

    int posledna, ostanata;
        if (broj < 10) {
            return broj;
        } else {
        posledna = broj % 10;
        ostanata = najdi_najgolemata_cifra(broj / 10);

        if (posledna > ostanata) {
            return posledna;
        } else return ostanata;

      }
    }


    int main()
    {
        int broj;
        printf("Vnesete broj: ");
        scanf("%d", &broj);

        int rezultat = najdi_najgolemata_cifra(broj);

        printf("Najgolemata cifra e : %d", rezultat);

        return 0;


    }
